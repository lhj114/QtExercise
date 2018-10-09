#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    m_pGenderGroup = new QButtonGroup(this);
    m_pGenderGroup->addButton(ui->radioButtonBang, 0);
    m_pGenderGroup->addButton(ui->radioButtonWoman, 1);



}

Widget::~Widget()
{
    delete ui;
}
