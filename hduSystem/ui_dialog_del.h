/********************************************************************************
** Form generated from reading UI file 'dialog_del.ui'
**
** Created: Sun Aug 20 00:33:31 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_DEL_H
#define UI_DIALOG_DEL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_del
{
public:
    QPushButton *del_buto;
    QLabel *label;
    QLineEdit *del_id;
    QPushButton *ret;

    void setupUi(QDialog *Dialog_del)
    {
        if (Dialog_del->objectName().isEmpty())
            Dialog_del->setObjectName(QString::fromUtf8("Dialog_del"));
        Dialog_del->resize(400, 300);
        del_buto = new QPushButton(Dialog_del);
        del_buto->setObjectName(QString::fromUtf8("del_buto"));
        del_buto->setGeometry(QRect(70, 240, 98, 27));
        label = new QLabel(Dialog_del);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 40, 201, 81));
        del_id = new QLineEdit(Dialog_del);
        del_id->setObjectName(QString::fromUtf8("del_id"));
        del_id->setGeometry(QRect(120, 150, 151, 41));
        ret = new QPushButton(Dialog_del);
        ret->setObjectName(QString::fromUtf8("ret"));
        ret->setGeometry(QRect(240, 240, 98, 27));

        retranslateUi(Dialog_del);

        QMetaObject::connectSlotsByName(Dialog_del);
    } // setupUi

    void retranslateUi(QDialog *Dialog_del)
    {
        Dialog_del->setWindowTitle(QApplication::translate("Dialog_del", "Dialog", 0, QApplication::UnicodeUTF8));
        del_buto->setText(QApplication::translate("Dialog_del", "\347\241\256\350\256\244\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog_del", "\350\257\267\350\276\223\345\205\245\350\246\201\345\210\240\351\231\244\347\232\204\345\255\246\347\224\237\345\255\246\345\217\267", 0, QApplication::UnicodeUTF8));
        ret->setText(QApplication::translate("Dialog_del", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog_del: public Ui_Dialog_del {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_DEL_H
