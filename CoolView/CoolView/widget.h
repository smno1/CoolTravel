#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFileDialog>
#include <Qicon>
#include <QPixmap>
#include "dialog.h"
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    QPixmap pix;
    QIcon icon;
    
private slots:
    void on_input_clicked();

    void on_edit_clicked();

    void on_view_clicked();

    void on_output_clicked();

    void on_input_photo_clicked();

    void on_delete_photo_clicked();

    void on_savekml_clicked();

    void on_openkml_clicked();

    void on_outputkml_clicked();

    void on_search_clicked();

    void on_timeinview_clicked();

    void on_nameinview_clicked();

    void on_tabWidget_currentChanged(int index);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
