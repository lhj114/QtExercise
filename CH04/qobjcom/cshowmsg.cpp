#include "cshowmsg.h"
#include <QMessageBox>

CShowMsg::CShowMsg(QObject *parent) : QObject(parent)
{

}

void CShowMsg::RecvMsg(QString str)
{
    QMessageBox::information(NULL, tr("show"), str);
}
