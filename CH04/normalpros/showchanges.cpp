#include "showchanges.h"
#include <QDebug>

ShowChanges::ShowChanges(QObject *parent) : QObject(parent)
{

}

void ShowChanges::RecvValue(double v)
{
    qDebug() << "RecvValue:" << fixed << v;
}
