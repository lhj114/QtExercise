#include "cshowvoid.h"
#include <QMessageBox>

CShowVoid::CShowVoid(QObject *parent) : QObject(parent)
{

}

void CShowVoid::RecvVoid()
{
    QMessageBox::information(NULL, tr("WHO I AM"), tr("just do it"));
}
