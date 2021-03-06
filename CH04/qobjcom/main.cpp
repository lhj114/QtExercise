#include "widget.h"
#include <QApplication>
#include "cshowmsg.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    CShowMsg s;
    QObject::connect(&w, &Widget::SendMsg, &s,&CShowMsg::RecvMsg);
    w.show();

    return a.exec();
}
