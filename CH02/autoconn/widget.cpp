#include "widget.h"
#include "ui_widget.h"

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

void Widget::on_hungrybutton_clicked()
{
    QMessageBox::information(this, tr("送餐"), tr("叮咚！外卖已送达"));
}
