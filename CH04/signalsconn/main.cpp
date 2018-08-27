#include "widget.h"
#include <QApplication>
#include "cshowvoid.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    CShowVoid s;
    QObject::connect(&w, &Widget::SendVoid, &s, &CShowVoid::RecvVoid);
    w.show();

    return a.exec();
}
