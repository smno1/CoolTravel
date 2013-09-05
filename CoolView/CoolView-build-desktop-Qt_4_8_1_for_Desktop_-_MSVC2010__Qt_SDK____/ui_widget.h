/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Sat Jun 30 15:59:57 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStackedWidget>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *logo;
    QLabel *slogan;
    QPushButton *input;
    QPushButton *edit;
    QPushButton *view;
    QPushButton *output;
    QWidget *page_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label;
    QTextEdit *kmlname;
    QPushButton *savekml;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *input_photo;
    QPushButton *delete_photo;
    QListWidget *pictureview;
    QWidget *tab_2;
    QGroupBox *groupBox;
    QRadioButton *timeinview;
    QRadioButton *nameinview;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QDateEdit *dateEdit;
    QLabel *label_2;
    QDateEdit *dateEdit_2;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *textEdit;
    QPushButton *search;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_3;
    QListWidget *kmlview;
    QPushButton *openkml;
    QWidget *tab_3;
    QTabWidget *tabWidget_2;
    QWidget *tab_5;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_4;
    QDateEdit *dateEdit_3;
    QLabel *label_3;
    QDateEdit *dateEdit_4;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QTextEdit *textEdit_3;
    QPushButton *pushButton_4;
    QListView *listView_3;
    QWidget *tab_7;
    QListView *listView_2;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QWidget *tab_6;
    QTextEdit *textEdit_2;
    QToolButton *toolButton_5;
    QWidget *tab_4;
    QPushButton *pushButton_5;
    QPushButton *outputkml;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_6;
    QDateEdit *dateEdit_5;
    QLabel *label_4;
    QDateEdit *dateEdit_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QTextEdit *textEdit_4;
    QLabel *title;
    QWidget *page_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1200, 750);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        Widget->setMinimumSize(QSize(1200, 750));
        Widget->setMaximumSize(QSize(1200, 750));
        QPalette palette;
        QBrush brush(QColor(0, 255, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(240, 240, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        Widget->setPalette(palette);
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1200, 750));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        logo = new QLabel(page);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(70, 40, 231, 191));
        logo->setAlignment(Qt::AlignCenter);
        slogan = new QLabel(page);
        slogan->setObjectName(QString::fromUtf8("slogan"));
        slogan->setGeometry(QRect(50, 420, 301, 31));
        slogan->setAlignment(Qt::AlignCenter);
        input = new QPushButton(page);
        input->setObjectName(QString::fromUtf8("input"));
        input->setGeometry(QRect(390, 60, 140, 136));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(input->sizePolicy().hasHeightForWidth());
        input->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/my_documents.png"), QSize(), QIcon::Normal, QIcon::Off);
        input->setIcon(icon);
        input->setIconSize(QSize(128, 128));
        input->setFlat(true);
        edit = new QPushButton(page);
        edit->setObjectName(QString::fromUtf8("edit"));
        edit->setGeometry(QRect(610, 160, 128, 128));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        edit->setIcon(icon1);
        edit->setIconSize(QSize(128, 128));
        edit->setFlat(true);
        view = new QPushButton(page);
        view->setObjectName(QString::fromUtf8("view"));
        view->setGeometry(QRect(390, 320, 128, 128));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/my_pictures.png"), QSize(), QIcon::Normal, QIcon::Off);
        view->setIcon(icon2);
        view->setIconSize(QSize(128, 128));
        view->setFlat(true);
        output = new QPushButton(page);
        output->setObjectName(QString::fromUtf8("output"));
        output->setGeometry(QRect(610, 410, 128, 128));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/text_document.png"), QSize(), QIcon::Normal, QIcon::Off);
        output->setIcon(icon3);
        output->setIconSize(QSize(128, 128));
        output->setFlat(true);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        tabWidget = new QTabWidget(page_2);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 20, 1200, 750));
        QPalette palette1;
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        tabWidget->setPalette(palette1);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 670, 241, 31));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_9->addWidget(label);

        kmlname = new QTextEdit(layoutWidget);
        kmlname->setObjectName(QString::fromUtf8("kmlname"));

        horizontalLayout_9->addWidget(kmlname);

        savekml = new QPushButton(layoutWidget);
        savekml->setObjectName(QString::fromUtf8("savekml"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/folder_options.png"), QSize(), QIcon::Normal, QIcon::Off);
        savekml->setIcon(icon4);
        savekml->setDefault(false);

        horizontalLayout_9->addWidget(savekml);

        layoutWidget1 = new QWidget(tab);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(2, 2, 241, 651));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        input_photo = new QPushButton(layoutWidget1);
        input_photo->setObjectName(QString::fromUtf8("input_photo"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icon/jpeg_image.png"), QSize(), QIcon::Normal, QIcon::Off);
        input_photo->setIcon(icon5);

        horizontalLayout->addWidget(input_photo);

        delete_photo = new QPushButton(layoutWidget1);
        delete_photo->setObjectName(QString::fromUtf8("delete_photo"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icon/recycle_bin_f.png"), QSize(), QIcon::Normal, QIcon::Off);
        delete_photo->setIcon(icon6);

        horizontalLayout->addWidget(delete_photo);


        verticalLayout->addLayout(horizontalLayout);

        pictureview = new QListWidget(layoutWidget1);
        pictureview->setObjectName(QString::fromUtf8("pictureview"));
        pictureview->setDragDropMode(QAbstractItemView::NoDragDrop);
        pictureview->setAlternatingRowColors(true);
        pictureview->setSelectionMode(QAbstractItemView::MultiSelection);
        pictureview->setSelectionRectVisible(true);
        pictureview->setSortingEnabled(true);

        verticalLayout->addWidget(pictureview);

        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icon/my_documents.png"), QSize(), QIcon::Normal, QIcon::On);
        tabWidget->addTab(tab, icon7, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 221, 141));
        timeinview = new QRadioButton(groupBox);
        timeinview->setObjectName(QString::fromUtf8("timeinview"));
        timeinview->setGeometry(QRect(10, 20, 51, 16));
        timeinview->setChecked(true);
        nameinview = new QRadioButton(groupBox);
        nameinview->setObjectName(QString::fromUtf8("nameinview"));
        nameinview->setGeometry(QRect(10, 80, 89, 16));
        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 50, 218, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        dateEdit = new QDateEdit(layoutWidget2);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout_2->addWidget(dateEdit);

        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        dateEdit_2 = new QDateEdit(layoutWidget2);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));

        horizontalLayout_2->addWidget(dateEdit_2);

        layoutWidget3 = new QWidget(groupBox);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 100, 221, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(layoutWidget3);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        horizontalLayout_3->addWidget(textEdit);

        search = new QPushButton(layoutWidget3);
        search->setObjectName(QString::fromUtf8("search"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icon/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        search->setIcon(icon8);

        horizontalLayout_3->addWidget(search);

        layoutWidget4 = new QWidget(tab_2);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(0, 140, 221, 561));
        verticalLayout_3 = new QVBoxLayout(layoutWidget4);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        kmlview = new QListWidget(layoutWidget4);
        kmlview->setObjectName(QString::fromUtf8("kmlview"));

        verticalLayout_3->addWidget(kmlview);

        openkml = new QPushButton(layoutWidget4);
        openkml->setObjectName(QString::fromUtf8("openkml"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icon/network_service.png"), QSize(), QIcon::Normal, QIcon::Off);
        openkml->setIcon(icon9);

        verticalLayout_3->addWidget(openkml);

        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icon/my_pictures.png"), QSize(), QIcon::Normal, QIcon::On);
        tabWidget->addTab(tab_2, icon10, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget_2 = new QTabWidget(tab_3);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 231, 701));
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        groupBox_2 = new QGroupBox(tab_5);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 0, 221, 141));
        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(10, 20, 51, 16));
        radioButton_3->setChecked(true);
        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(10, 80, 89, 16));
        layoutWidget5 = new QWidget(groupBox_2);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(0, 50, 218, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        dateEdit_3 = new QDateEdit(layoutWidget5);
        dateEdit_3->setObjectName(QString::fromUtf8("dateEdit_3"));

        horizontalLayout_4->addWidget(dateEdit_3);

        label_3 = new QLabel(layoutWidget5);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        dateEdit_4 = new QDateEdit(layoutWidget5);
        dateEdit_4->setObjectName(QString::fromUtf8("dateEdit_4"));

        horizontalLayout_4->addWidget(dateEdit_4);

        layoutWidget_2 = new QWidget(groupBox_2);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 100, 221, 73));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        textEdit_3 = new QTextEdit(layoutWidget_2);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));

        horizontalLayout_5->addWidget(textEdit_3);

        pushButton_4 = new QPushButton(layoutWidget_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setIcon(icon8);

        horizontalLayout_5->addWidget(pushButton_4);

        listView_3 = new QListView(tab_5);
        listView_3->setObjectName(QString::fromUtf8("listView_3"));
        listView_3->setGeometry(QRect(0, 140, 231, 531));
        tabWidget_2->addTab(tab_5, icon8, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        listView_2 = new QListView(tab_7);
        listView_2->setObjectName(QString::fromUtf8("listView_2"));
        listView_2->setGeometry(QRect(0, 20, 231, 651));
        toolButton = new QToolButton(tab_7);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(0, 0, 41, 21));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icon/folder_new.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon11);
        toolButton_2 = new QToolButton(tab_7);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setGeometry(QRect(40, 0, 41, 21));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icon/document_delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon12);
        toolButton_3 = new QToolButton(tab_7);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        toolButton_3->setGeometry(QRect(80, 0, 41, 21));
        toolButton_3->setIcon(icon1);
        toolButton_4 = new QToolButton(tab_7);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));
        toolButton_4->setGeometry(QRect(120, 0, 41, 21));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icon/save_add2.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_4->setIcon(icon13);
        tabWidget_2->addTab(tab_7, icon5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        textEdit_2 = new QTextEdit(tab_6);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(0, 0, 231, 671));
        toolButton_5 = new QToolButton(tab_6);
        toolButton_5->setObjectName(QString::fromUtf8("toolButton_5"));
        toolButton_5->setGeometry(QRect(180, 640, 37, 18));
        toolButton_5->setIcon(icon13);
        tabWidget_2->addTab(tab_6, icon3, QString());
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icon/settings.png"), QSize(), QIcon::Normal, QIcon::On);
        tabWidget->addTab(tab_3, icon14, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        pushButton_5 = new QPushButton(tab_4);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(820, 470, 128, 128));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icon/entire_network.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon15);
        pushButton_5->setIconSize(QSize(128, 128));
        pushButton_5->setFlat(true);
        outputkml = new QPushButton(tab_4);
        outputkml->setObjectName(QString::fromUtf8("outputkml"));
        outputkml->setGeometry(QRect(800, 90, 128, 128));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/icon/closed_folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        outputkml->setIcon(icon16);
        outputkml->setIconSize(QSize(128, 128));
        outputkml->setFlat(true);
        layoutWidget6 = new QWidget(tab_4);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(10, 30, 290, 105));
        verticalLayout_2 = new QVBoxLayout(layoutWidget6);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_5 = new QLabel(layoutWidget6);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_8->addWidget(label_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        dateEdit_5 = new QDateEdit(layoutWidget6);
        dateEdit_5->setObjectName(QString::fromUtf8("dateEdit_5"));

        horizontalLayout_6->addWidget(dateEdit_5);

        label_4 = new QLabel(layoutWidget6);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_6->addWidget(label_4);

        dateEdit_6 = new QDateEdit(layoutWidget6);
        dateEdit_6->setObjectName(QString::fromUtf8("dateEdit_6"));

        horizontalLayout_6->addWidget(dateEdit_6);


        horizontalLayout_8->addLayout(horizontalLayout_6);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(layoutWidget6);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_7->addWidget(label_6);

        textEdit_4 = new QTextEdit(layoutWidget6);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));

        horizontalLayout_7->addWidget(textEdit_4);


        verticalLayout_2->addLayout(horizontalLayout_7);

        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/icon/text_document.png"), QSize(), QIcon::Normal, QIcon::On);
        tabWidget->addTab(tab_4, icon17, QString());
        title = new QLabel(page_2);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(0, 0, 1200, 21));
        title->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        stackedWidget->addWidget(page_3);

        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(1);
        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        logo->setText(QApplication::translate("Widget", "logo", 0, QApplication::UnicodeUTF8));
        slogan->setText(QApplication::translate("Widget", "slogan", 0, QApplication::UnicodeUTF8));
        input->setText(QString());
        edit->setText(QString());
        view->setText(QString());
        output->setText(QString());
        label->setText(QApplication::translate("Widget", "KML\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        savekml->setText(QApplication::translate("Widget", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        input_photo->setText(QApplication::translate("Widget", "\345\257\274\345\205\245\347\205\247\347\211\207", 0, QApplication::UnicodeUTF8));
        delete_photo->setText(QApplication::translate("Widget", "\345\210\240\351\231\244\347\205\247\347\211\207", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Widget", "\345\257\274\345\205\245\350\241\214\347\250\213", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Widget", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        timeinview->setText(QApplication::translate("Widget", "\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        nameinview->setText(QApplication::translate("Widget", "\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Widget", "to", 0, QApplication::UnicodeUTF8));
        search->setText(QApplication::translate("Widget", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        openkml->setText(QApplication::translate("Widget", "\345\257\274\345\205\245KML", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Widget", "\346\265\217\350\247\210\350\241\214\347\250\213", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Widget", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("Widget", "\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        radioButton_4->setText(QApplication::translate("Widget", "\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Widget", "to", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("Widget", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("Widget", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButton->setToolTip(QApplication::translate("Widget", "\346\267\273\345\212\240\347\205\247\347\211\207", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton->setText(QApplication::translate("Widget", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButton_2->setToolTip(QApplication::translate("Widget", "\345\210\240\351\231\244\347\205\247\347\211\207", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_2->setText(QApplication::translate("Widget", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButton_3->setToolTip(QApplication::translate("Widget", "\347\274\226\350\276\221\347\205\247\347\211\207", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_3->setText(QApplication::translate("Widget", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButton_4->setToolTip(QApplication::translate("Widget", "\344\277\235\345\255\230\350\277\233KML", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_4->setText(QApplication::translate("Widget", "...", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("Widget", "\347\205\247\347\211\207", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButton_5->setToolTip(QApplication::translate("Widget", "\344\277\235\345\255\230\346\270\270\350\256\260", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_5->setText(QApplication::translate("Widget", "...", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("Widget", "\346\270\270\350\256\260", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Widget", "\347\274\226\350\276\221\350\241\214\347\250\213", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButton_5->setToolTip(QApplication::translate("Widget", "\345\257\274\345\207\272HTML", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        outputkml->setToolTip(QApplication::translate("Widget", "\345\257\274\345\207\272KML", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        outputkml->setText(QString());
        label_5->setText(QApplication::translate("Widget", "\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Widget", "to", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Widget", "\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Widget", "\345\257\274\345\207\272\350\241\214\347\250\213", 0, QApplication::UnicodeUTF8));
        title->setText(QApplication::translate("Widget", "CoolView", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
