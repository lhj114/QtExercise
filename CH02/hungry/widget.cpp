#include "widget.h"
#include "ui_widget.h"
#include <qmessagebox.h>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);\
    connect(ui->pushButton, &QPushButton::clicked456, this, &Widget::FoodIsComing);
    //connect(ui->pushButton, SIGNAL(clicked456()), this, SLOT(FoodIsComing()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::FoodIsComing()
{
    QMessageBox::information(this, tr("送餐"), tr("外卖已经送达"));
}
