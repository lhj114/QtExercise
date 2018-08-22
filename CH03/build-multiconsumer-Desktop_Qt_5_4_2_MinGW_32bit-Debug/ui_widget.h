/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButtonAnderson;
    QPushButton *pushButtonBruce;
    QPushButton *pushButtonCastiel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        pushButtonAnderson = new QPushButton(Widget);
        pushButtonAnderson->setObjectName(QStringLiteral("pushButtonAnderson"));
        pushButtonAnderson->setGeometry(QRect(70, 70, 80, 20));
        pushButtonBruce = new QPushButton(Widget);
        pushButtonBruce->setObjectName(QStringLiteral("pushButtonBruce"));
        pushButtonBruce->setGeometry(QRect(70, 110, 80, 20));
        pushButtonCastiel = new QPushButton(Widget);
        pushButtonCastiel->setObjectName(QStringLiteral("pushButtonCastiel"));
        pushButtonCastiel->setGeometry(QRect(70, 150, 80, 20));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        pushButtonAnderson->setText(QApplication::translate("Widget", "Anderson", 0));
        pushButtonBruce->setText(QApplication::translate("Widget", "Bruce", 0));
        pushButtonCastiel->setText(QApplication::translate("Widget", "Castiel", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
