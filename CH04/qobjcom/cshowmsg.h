#ifndef CSHOWMSG_H
#define CSHOWMSG_H

#include <QObject>

class CShowMsg : public QObject
{
    Q_OBJECT
public:
    explicit CShowMsg(QObject *parent = 0);

signals:

public slots:
    //接受SendMsg 信号的槽函数
    void RecvMsg(QString str);
};

#endif // CSHOWMSG_H
