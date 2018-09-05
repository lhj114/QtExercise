#include "widget.h"
#include <QApplication>
#include <qdebug.h>
#include "showchanges.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    ShowChanges s;
    QObject::connect(&w, &Widget::valueChanged, &s, &ShowChanges::RecvValue);
    QObject::connect(&w, &Widget::nickNameChanged, &s, &ShowChanges::RecvNickName);
    QObject::connect(&w, &Widget::countChanged, &s,&ShowChanges::RecvCount);

    w.setNickName("Wid");
    qDebug() << w.nickName();
    w.setCount(100);
    qDebug() << w.count();

    w.setProperty("value", 2.3456);
    qDebug() << fixed << w.property("value").toDouble();
    w.show();

    return a.exec();
}
