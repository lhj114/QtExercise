#include "widget.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    qDebug() << w.property("myvalue").isValid();
    w.setProperty("myvalue", "Wid");
    qDebug() << w.property("myvalue").toDouble();
    //获取并打印
    qDebug()<<w.property("myName").toString();

    //获取所有动态属性名称，打印名称列表
    qDebug()<<w.dynamicPropertyNames();
    w.show();

    return a.exec();
}
