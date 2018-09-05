#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    Q_PROPERTY(QString nickName READ nickName WRITE setNickName NOTIFY nickNameChanged)
    Q_PROPERTY(double value MEMBER m_value NOTIFY valueChanged)
    Q_PROPERTY(int count MEMBER m_count READ count WRITE setCount NOTIFY countChanged)
    const QString &nickName();
    int count();

signals:
    void nickNameChanged(const QString &strNewName);
    void countChanged(int nNewValue);
    void valueChanged(double dblNewValue);
public slots:
    void setNickName(const QString &strNewName);
    void setCount(int nNewCount);
private:
    Ui::Widget *ui;

    QString m_nickName;
    int m_count;
    double m_value;
};

#endif // WIDGET_H
