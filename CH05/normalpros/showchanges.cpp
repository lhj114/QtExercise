#include "showchanges.h"
#include <QDebug>

ShowChanges::ShowChanges(QObject *parent) : QObject(parent)
{

}

void ShowChanges::RecvValue(double v)
{
    qDebug() << "RecvValue:" << fixed << v;
}


void ShowChanges::RecvNickName(const QString &strNewName)
{
    qDebug() << "RecvName" << strNewName;
}

void ShowChanges::RecvCount(int nNewCount)
{
    qDebug() << "RecvCount" << nNewCount;
}
