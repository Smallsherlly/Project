/********************************************************************************
** Form generated from reading UI file 'hdusys.ui'
**
** Created: Sat Aug 19 20:24:05 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HDUSYS_H
#define UI_HDUSYS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hduSys
{
public:
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *tea_log;
    QPushButton *stu_log;

    void setupUi(QDialog *hduSys)
    {
        if (hduSys->objectName().isEmpty())
            hduSys->setObjectName(QString::fromUtf8("hduSys"));
        hduSys->resize(505, 424);
        label = new QLabel(hduSys);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 60, 290, 81));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        widget = new QWidget(hduSys);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(140, 170, 241, 201));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tea_log = new QPushButton(widget);
        tea_log->setObjectName(QString::fromUtf8("tea_log"));

        verticalLayout->addWidget(tea_log);

        stu_log = new QPushButton(widget);
        stu_log->setObjectName(QString::fromUtf8("stu_log"));

        verticalLayout->addWidget(stu_log);


        retranslateUi(hduSys);

        QMetaObject::connectSlotsByName(hduSys);
    } // setupUi

    void retranslateUi(QDialog *hduSys)
    {
        hduSys->setWindowTitle(QApplication::translate("hduSys", "hduSys", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("hduSys", "\346\235\255\347\224\265\345\270\210\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        tea_log->setText(QApplication::translate("hduSys", "\346\225\231\345\270\210\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
        stu_log->setText(QApplication::translate("hduSys", "\345\255\246\347\224\237\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class hduSys: public Ui_hduSys {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HDUSYS_H
