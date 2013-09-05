#include "widget.h"
#include "ui_widget.h"
#include "EXIF.H"
#include <QMessageBox>
#include <QButtonGroup>
#include <QDataStream>
#include <QFileInfo>
#include <qxmlstream.h>
#include <QTextStream>
#include <QDomDocument>
#include <iostream>
using namespace std;
QString s2q(const string &s);
string q2s(const QString &s) ;
string f2s(float f);
void Writeelement(QXmlStreamWriter *xmlWriter, QString name, QString startDate, QString endDate);
void AddElement(QDomDocument *doc,QString name,QString startDate,QString endDate);
void WriteKmlHead(QXmlStreamWriter *kmlWriter, QString name, QString description);
void AddPlacemarkElement(QDomDocument *kdoc, int id, QString name, QString TimeStamp,
                         QString Longitude, QString Latitude, QString Altitude);
void ExecExif(FILE*hFile,EXIFINFO *m_exifinfo);
void AddTitle(QDomDocument *kdoc);
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}




void Widget::on_delete_photo_clicked()
{
    QList<QListWidgetItem *> list=ui->pictureview->selectedItems();
    if(!list.isEmpty()){
        foreach(QListWidgetItem *item,list)
            delete item;
    }
}

void Widget::on_outputkml_clicked()
{
    EXIFINFO m_exifinfo;
    QString fileName = QFileDialog::getSaveFileName(this, "Save File",
                                                    "/home/untitled.xml",
                                                    "files (*.kml *.xml)");
    QFile file(fileName);
    if(!file.open(QIODevice::WriteOnly)){
        //        QMessageBox::Warning(this,"CoolView",
        //                             "Cannot write file %1:\n%2.".arg(file.fileName()).arg(file.errorString()));
        return;
    }
    QDataStream out(&file);
    out.setVersion(12);
    QApplication::setOverrideCursor(Qt::WaitCursor);
    for(int i=0;i<ui->pictureview->count();i++){
        QString output;
        FILE* hFile=fopen((const char *)ui->pictureview->item(i)->data(5).toString().toLocal8Bit(),"rb");
        if (hFile!=NULL){
            ExecExif(hFile,&m_exifinfo);
            fclose(hFile);
        }
        else{
            output="the file is empty";
            out<<output.toLocal8Bit();
        }
    }
    QApplication::restoreOverrideCursor();
}

void Widget::on_savekml_clicked()
{
    QString name=ui->kmlname->toPlainText();
    name.append(".kml");
    EXIFINFO m_exifinfo;
    QDomDocument doc;
    QDomDocument kdoc;
    QString kerrorStr;
    int kerrorLine;
    int kerrorCol;
    QString xmlname="index.xml";
    QFile file(name);
    if(!file.open(QIODevice::WriteOnly)){
        cout<<"wrong path";
        return;
    }
    QXmlStreamWriter kmlWriter(&file);
    WriteKmlHead(&kmlWriter,name," ");
    //file.flush();  //刷新仍不能保存缓存内容，改成关闭文件。
    file.close();

    for(int i=0;i<ui->pictureview->count();i++){
        FILE* hFile=fopen((const char *)ui->pictureview->item(i)->data(5).toString().toLocal8Bit(),"rb");
        if (hFile!=NULL){
            ExecExif(hFile,&m_exifinfo);
            fclose(hFile);
        }
        else{
            cout<<"the file is empty";
        }
        if(!file.open(QIODevice::ReadOnly|QFile::Text)){
            cout<<"wrong path";
            return;
        }
        if(!kdoc.setContent(&file,true,&kerrorStr,&kerrorLine,&kerrorCol)){
            cout<<q2s(kerrorStr)<<" "<<kerrorLine<<" "<<kerrorCol;
        }
        file.close();
        if(!file.open(QFile::WriteOnly|QFile::Text)){
            cout<<"can't not open kml";
            return ;
        }
        QTextStream out(&file);
        AddPlacemarkElement(&kdoc,i+1,ui->pictureview->item(i)->text(),m_exifinfo.DateTime,
                            s2q(f2s(m_exifinfo.FLongitude)),s2q(f2s(m_exifinfo.FLatitude)),s2q(f2s(m_exifinfo.Altitude)));
        kdoc.save(out,4);
        file.close();
    }
    if(!file.open(QIODevice::ReadOnly|QFile::Text)){
        cout<<"wrong path";
        return;
    }
    if(!kdoc.setContent(&file,true,&kerrorStr,&kerrorLine,&kerrorCol)){
        cout<<q2s(kerrorStr)<<" "<<kerrorLine<<" "<<kerrorCol;
    }
    file.close();
    if(!file.open(QFile::WriteOnly|QFile::Text)){
        cout<<"can't not open kml";
        return ;
    }
    QTextStream out(&file);
    AddTitle(&kdoc);
    kdoc.save(out,4);
    file.close();

    QFile xfile(xmlname);
    if(!xfile.exists()){
        if(!xfile.open(QFile::WriteOnly|QFile::Text)){
            cout<<"can't not open xml";
            return ;
        }
        QXmlStreamWriter xmlWriter(&xfile);
        Writeelement(&xmlWriter,name,"null","null");
    }
    else{
        if(!xfile.open(QFile::ReadWrite|QFile::Text)){
            cout<<"can't not open xml";
            return ;
        }
        if(!doc.setContent(&xfile,true,&kerrorStr,&kerrorLine,&kerrorCol)){
            cout<<q2s(kerrorStr)<<" "<<kerrorLine<<" "<<kerrorCol;
        }
        xfile.close();
        if(!xfile.open(QFile::WriteOnly|QFile::Text)){
            cout<<"can't not open xml";
            return ;
        }
        QTextStream out(&xfile);
        AddElement(&doc,name,"null","null");
        doc.save(out,4);
    }
    QApplication::restoreOverrideCursor();
}

void Widget::on_openkml_clicked()
{
    QStringList qkmlnames=QFileDialog::getOpenFileNames(this,"open kml","/home","files(*.kml *.xml)");
    for (int i = 0; i < qkmlnames.size(); i++)
    {
        QString temppath=qkmlnames.at(i);
        QListWidgetItem *newItem = new QListWidgetItem;
        newItem->setData(0,QVariant(temppath));
        newItem->setText(QFileInfo(qkmlnames.at(i)).fileName());
        newItem->setTextAlignment(64);
        ui->kmlview->addItem(newItem);
    }
}

void Widget::on_input_photo_clicked()
{
    QStringList qfilenames=QFileDialog::getOpenFileNames(this,"open jpg","/home","files(*.jpg)");
    for (int i = 0; i < qfilenames.size(); i++)
    {
        //加载图表会使使载入有延迟
        //        pix.load((const char *)qfilenames.at(i).toLocal8Bit());
        //        icon.addPixmap(pix);
        QString temppath=qfilenames.at(i);
        QListWidgetItem *newItem = new QListWidgetItem;
        //        newItem->setIcon(icon);
        newItem->setData(5,	QVariant(qfilenames.at(i)));
        newItem->setText(QFileInfo(temppath).fileName());
        newItem->setTextAlignment(64);
        ui->pictureview->addItem(newItem);
    }
}

void Widget::on_tabWidget_currentChanged(int index)
{
    QString xmlname="index.xml";
    QFile xfile(xmlname);
    QStringList itemtexts;
    if(xfile.exists()){
        if(!xfile.open(QFile::ReadOnly|QFile::Text)){
            cout<<"can't not open xml";
            return ;
        }
        if(index==1){
            ui->kmlview->clear();
            QXmlStreamReader reader(&xfile);
            reader.readNext();
            while(!reader.atEnd()){
                if(reader.name()=="kml"){
                    reader.readNext();
                    while(reader.name()!="name"&&!reader.atEnd()){
                        reader.readNext();
                    }
                    itemtexts<<reader.readElementText();

                    while(reader.name()!="name"&&!reader.atEnd()){
                        reader.readNext();
                    }
                }

                else{
                    reader.readNext();
                }
            }
            //            foreach(QString text,itemtexts)
            for (int i = 0; i < itemtexts.size()-1; i++)
            {
                QListWidgetItem *newItem = new QListWidgetItem;
                newItem->setText(itemtexts.at(i));
                ui->kmlview->addItem(newItem);
            }
        }
    }
}
//==========================================================简单界面响应事件=========================================
void Widget::on_input_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Widget::on_edit_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->tabWidget->setCurrentIndex(2);
}

void Widget::on_view_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->tabWidget->setCurrentIndex(1);
}

void Widget::on_output_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->tabWidget->setCurrentIndex(3);
}

void Widget::on_search_clicked()
{
    if(ui->timeinview->isChecked()){

    }
    else{

    }
}

void Widget::on_timeinview_clicked()
{
    ui->timeinview->setChecked(true);
    ui->nameinview->setChecked(false);
}

void Widget::on_nameinview_clicked()
{
    ui->timeinview->setChecked(false);
    ui->nameinview->setChecked(true);
}

//========================================================工具函数==========================================================
QString s2q(const string &s){
    return QString(QString::fromLocal8Bit(s.c_str()));
}
string q2s(const QString &s){
    return string((const char *)s.toLocal8Bit());
}
string f2s(float f){
    char   buf[32];
    _gcvt(f,   16,   buf);
    string   s   =   buf;
    return s;
}
//=======================================================辅助函数================================================================

void ExecExif(FILE *hFile,EXIFINFO *m_exifinfo){
    memset(m_exifinfo,0,sizeof(EXIFINFO));
    Cexif exif(m_exifinfo);
    exif.DecodeExif(hFile);
}

void Writeelement(QXmlStreamWriter *xmlWriter, QString name, QString startDate, QString endDate){
    xmlWriter->setAutoFormatting(true);
    xmlWriter->writeStartDocument();
    xmlWriter->writeStartElement("index");
    xmlWriter->writeStartElement("kml");
    xmlWriter->writeTextElement("name",name);
    xmlWriter->writeTextElement("startDate",startDate);
    xmlWriter->writeTextElement("endDate",endDate);
    xmlWriter->writeEndElement();
    xmlWriter->writeEndDocument();
}

void AddElement(QDomDocument *doc,QString name,QString startDate,QString endDate){
    QDomElement root=doc->documentElement();

    QDomElement newelement=doc->createElement("kml");
    QDomElement newelement1=doc->createElement("name");
    QDomText newtext1=doc->createTextNode(name);
    QDomElement newelement2=doc->createElement("startDate");
    QDomText newtext2=doc->createTextNode(startDate);
    QDomElement newelement3=doc->createElement("endDate");
    QDomText newtext3=doc->createTextNode(endDate);

    newelement1.appendChild(newtext1);
    newelement.appendChild(newelement1);
    newelement2.appendChild(newtext2);
    newelement.appendChild(newelement2);
    newelement3.appendChild(newtext3);
    newelement.appendChild(newelement3);
    root.appendChild(newelement);
}

void WriteKmlHead(QXmlStreamWriter *kmlWriter, QString name, QString description){
    kmlWriter->setAutoFormatting(true);
    kmlWriter->writeNamespace("http://www.opengis.net/kml/2.2");
    kmlWriter->writeNamespace("http://www.google.com/kml/ext/2.2","gx");
    kmlWriter->writeStartDocument();
    kmlWriter->writeStartElement("kml");
    kmlWriter->writeStartElement("Document");
    kmlWriter->writeTextElement("name",name);
    kmlWriter->writeTextElement("description",description);
    kmlWriter->writeEndElement();
    kmlWriter->writeEndDocument();
}
void AddTitle(QDomDocument *kdoc){
    QDomElement root=kdoc->documentElement();
    root.setAttribute("xmlns","http://www.opengis.net/kml/2.2");
    root.setAttribute("xmlns:gx","http://www.google.com/kml/ext/2.2");
}

void AddPlacemarkElement(QDomDocument *kdoc, int id, QString name, QString TimeStamp,
                         QString Longitude, QString Latitude, QString Altitude){
    QDomElement root=kdoc->documentElement();
//    root.setAttribute("xmlns","http://www.opengis.net/kml/2.2");
//    root.setAttribute("xmlns:gx","http://www.google.com/kml/ext/2.2");

    QDomElement dom=root.firstChildElement("Document");
    QDomElement newelement=kdoc->createElement("Placemark");
    newelement.setAttribute("id",id);
    QDomElement newelement1=kdoc->createElement("name");
    QDomText newtext1=kdoc->createTextNode(name);
    QDomElement newelement2=kdoc->createElement("TimeStamp");
    QDomElement newelement2_1=kdoc->createElement("when");
    TimeStamp.replace(4,1,"-");
    TimeStamp.replace(7,1,"-");
    TimeStamp.replace(" ","T");
    TimeStamp.append("Z");
    QDomText newtext2_1=kdoc->createTextNode(TimeStamp);
    QDomElement stylelement=kdoc->createElement("Style");
    QDomElement stylelement1=kdoc->createElement("IconStyle");
    QDomElement stylelement2=kdoc->createElement("Icon");
    QDomElement stylelement3=kdoc->createElement("href");
    QDomText styletext3=kdoc->createTextNode(name);
    QDomElement stylelement2_1=kdoc->createElement("hotSpot");
    stylelement2_1.setAttribute("x",100);
    stylelement2_1.setAttribute("y",100);
    stylelement2_1.setAttribute("xunits","pixels");
    stylelement2_1.setAttribute("yunits","pixels");
    QDomElement newelement3=kdoc->createElement("Point");
    QDomElement newelement4=kdoc->createElement("gx:altitudeMode");
    QDomText newtext4=kdoc->createTextNode("clampToSeaFloor");
    QDomElement newelement5=kdoc->createElement("coordinates");
    QString coordinates;
    coordinates.append(Longitude);
    coordinates.append(",");
    coordinates.append(Latitude);
    coordinates.append(",");
    coordinates.append(Altitude);
    QDomText newtext5=kdoc->createTextNode(coordinates);
    newelement1.appendChild(newtext1);
    newelement.appendChild(newelement1);
    newelement2_1.appendChild(newtext2_1);
    newelement2.appendChild(newelement2_1);
    newelement.appendChild(newelement2);
    stylelement3.appendChild(styletext3);
    stylelement2.appendChild(stylelement3);
    stylelement1.appendChild(stylelement2);
    stylelement1.appendChild(stylelement2_1);
    stylelement.appendChild(stylelement1);
    newelement.appendChild(stylelement);
    newelement.appendChild(newelement3);
    newelement4.appendChild(newtext4);
    newelement3.appendChild(newelement4);
    newelement5.appendChild(newtext5);
    newelement3.appendChild(newelement5);

    dom.appendChild(newelement);

}
