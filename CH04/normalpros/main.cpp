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

    w.setNickName("Wid");
    qDebug() << w.nickName();
    w.setCount(100);
    qDebug() << w.count();

    w.setProperty("value", 2.3456);
    qDebug() << fixed << w.property("value").toDouble();
    w.show();

    return a.exec();
}
