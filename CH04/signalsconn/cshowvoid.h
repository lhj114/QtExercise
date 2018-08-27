#ifndef CSHOWVOID_H
#define CSHOWVOID_H

#include <QObject>

class CShowVoid : public QObject
{
    Q_OBJECT
public:
    explicit CShowVoid(QObject *parent = 0);

signals:

public slots:
    //接收到 SendVoid() 信号的槽函数
    void RecvVoid();
};

#endif // CSHOWVOID_H
