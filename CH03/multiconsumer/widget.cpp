#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include <qdebug.h>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->pushButtonAnderson, &QPushButton::clicked, this, &Widget::FoodIsComing);
    connect(ui->pushButtonBruce, &QPushButton::clicked, this, &Widget::FoodIsComing);
    connect(ui->pushButtonCastiel, &QPushButton::clicked, this, &Widget::FoodIsComing);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::FoodIsComing()
{
    //获取信号源
    QString strObjectSrc = this->sender()->objectName();
    qDebug()<<strObjectSrc;

    QString strMsg;
    //判断是哪个按钮发的信号
        if( "pushButtonAnderson" == strObjectSrc )
        {
            strMsg = tr("Hello Anderson! Your food is coming!");
        }
        else if( "pushButtonBruce" == strObjectSrc )
        {
            strMsg = tr("Hello Bruce! Your food is coming!");
        }
        else if( "pushButtonCastiel" == strObjectSrc )
        {
            strMsg = tr("Hello Castiel! Your food is coming!");
        }
        else
        {
            //do nothing
            return;
        }
    QMessageBox::information(this, tr("food"), strMsg);
}
