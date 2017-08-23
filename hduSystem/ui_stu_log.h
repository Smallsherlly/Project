/********************************************************************************
** Form generated from reading UI file 'stu_log.ui'
**
** Created: Sun Aug 20 00:01:46 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STU_LOG_H
#define UI_STU_LOG_H

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

class Ui_Stu_log
{
public:
    QPushButton *login;
    QPushButton *ret;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *m_id;
    QLineEdit *m_psw;
    QLabel *label_3;

    void setupUi(QDialog *Stu_log)
    {
        if (Stu_log->objectName().isEmpty())
            Stu_log->setObjectName(QString::fromUtf8("Stu_log"));
        Stu_log->resize(400, 300);
        login = new QPushButton(Stu_log);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(40, 250, 98, 27));
        ret = new QPushButton(Stu_log);
        ret->setObjectName(QString::fromUtf8("ret"));
        ret->setGeometry(QRect(220, 250, 98, 27));
        gridLayoutWidget = new QWidget(Stu_log);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(60, 100, 251, 121));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        m_id = new QLineEdit(gridLayoutWidget);
        m_id->setObjectName(QString::fromUtf8("m_id"));

        gridLayout->addWidget(m_id, 0, 1, 1, 1);

        m_psw = new QLineEdit(gridLayoutWidget);
        m_psw->setObjectName(QString::fromUtf8("m_psw"));

        gridLayout->addWidget(m_psw, 1, 1, 1, 1);

        label_3 = new QLabel(Stu_log);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 20, 171, 61));

        retranslateUi(Stu_log);

        QMetaObject::connectSlotsByName(Stu_log);
    } // setupUi

    void retranslateUi(QDialog *Stu_log)
    {
        Stu_log->setWindowTitle(QApplication::translate("Stu_log", "Dialog", 0, QApplication::UnicodeUTF8));
        login->setText(QApplication::translate("Stu_log", "\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
        ret->setText(QApplication::translate("Stu_log", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Stu_log", "\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Stu_log", "\345\255\246\345\217\267", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Stu_log", "\346\254\242\350\277\216\346\235\245\345\210\260\345\255\246\347\224\237\347\231\273\345\275\225\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Stu_log: public Ui_Stu_log {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STU_LOG_H
