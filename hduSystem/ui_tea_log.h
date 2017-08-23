/********************************************************************************
** Form generated from reading UI file 'tea_log.ui'
**
** Created: Sat Aug 19 23:44:50 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEA_LOG_H
#define UI_TEA_LOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tea_log
{
public:
    QPushButton *ret;
    QLabel *label_3;
    QPushButton *login;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *id;
    QLineEdit *psw;

    void setupUi(QDialog *Tea_log)
    {
        if (Tea_log->objectName().isEmpty())
            Tea_log->setObjectName(QString::fromUtf8("Tea_log"));
        Tea_log->resize(400, 300);
        ret = new QPushButton(Tea_log);
        ret->setObjectName(QString::fromUtf8("ret"));
        ret->setGeometry(QRect(240, 250, 98, 27));
        label_3 = new QLabel(Tea_log);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 20, 171, 61));
        login = new QPushButton(Tea_log);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(60, 250, 98, 27));
        gridLayoutWidget = new QWidget(Tea_log);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(80, 100, 251, 121));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        id = new QLineEdit(gridLayoutWidget);
        id->setObjectName(QString::fromUtf8("id"));

        gridLayout->addWidget(id, 0, 1, 1, 1);

        psw = new QLineEdit(gridLayoutWidget);
        psw->setObjectName(QString::fromUtf8("psw"));

        gridLayout->addWidget(psw, 1, 1, 1, 1);


        retranslateUi(Tea_log);

        QMetaObject::connectSlotsByName(Tea_log);
    } // setupUi

    void retranslateUi(QDialog *Tea_log)
    {
        Tea_log->setWindowTitle(QApplication::translate("Tea_log", "Dialog", 0, QApplication::UnicodeUTF8));
        ret->setText(QApplication::translate("Tea_log", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Tea_log", "\346\254\242\350\277\216\346\235\245\345\210\260\346\225\231\345\270\210\347\231\273\345\275\225\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        login->setText(QApplication::translate("Tea_log", "\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Tea_log", "\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Tea_log", "\345\255\246\345\217\267", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Tea_log: public Ui_Tea_log {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEA_LOG_H
