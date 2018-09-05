#ifndef SHOWCHANGES_H
#define SHOWCHANGES_H

#include <QObject>

class ShowChanges : public QObject
{
    Q_OBJECT
public:
    explicit ShowChanges(QObject *parent = 0);

signals:
public slots:
    void RecvValue(double v);
    void RecvNickName(const QString &strNewName);
    void RecvCount(int nNewCount);
};

#endif // SHOWCHANGES_H
