#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QButtonGroup>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
public slots:
    void RecvGenderID(int id);
    void RecvStatus(int id);
private:
    Ui::Widget *ui;
    QButtonGroup  m_pGenderGroup;
    QButtonGroup m_pStatusGroup;
};

#endif // WIDGET_H
