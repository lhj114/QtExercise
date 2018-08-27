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
};

#endif // SHOWCHANGES_H
