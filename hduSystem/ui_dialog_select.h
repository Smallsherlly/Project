/********************************************************************************
** Form generated from reading UI file 'dialog_select.ui'
**
** Created: Sun Aug 20 02:24:08 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SELECT_H
#define UI_DIALOG_SELECT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_select
{
public:
    QLineEdit *sel_in;
    QLabel *label;
    QPushButton *sel_buto;
    QPushButton *ret;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *id;
    QLineEdit *name;
    QLineEdit *sex;
    QLineEdit *phoneNum;
    QLineEdit *birth;
    QLineEdit *idNum;
    QLineEdit *nation;
    QLineEdit *oriplace;
    QLineEdit *remarks;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_8;
    QLabel *label_6;

    void setupUi(QDialog *Dialog_select)
    {
        if (Dialog_select->objectName().isEmpty())
            Dialog_select->setObjectName(QString::fromUtf8("Dialog_select"));
        Dialog_select->resize(575, 519);
        sel_in = new QLineEdit(Dialog_select);
        sel_in->setObjectName(QString::fromUtf8("sel_in"));
        sel_in->setGeometry(QRect(210, 20, 151, 31));
        label = new QLabel(Dialog_select);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 171, 51));
        sel_buto = new QPushButton(Dialog_select);
        sel_buto->setObjectName(QString::fromUtf8("sel_buto"));
        sel_buto->setGeometry(QRect(40, 470, 98, 27));
        ret = new QPushButton(Dialog_select);
        ret->setObjectName(QString::fromUtf8("ret"));
        ret->setGeometry(QRect(450, 470, 98, 27));
        verticalLayoutWidget = new QWidget(Dialog_select);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(240, 110, 160, 293));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        id = new QLineEdit(verticalLayoutWidget);
        id->setObjectName(QString::fromUtf8("id"));

        verticalLayout->addWidget(id);

        name = new QLineEdit(verticalLayoutWidget);
        name->setObjectName(QString::fromUtf8("name"));

        verticalLayout->addWidget(name);

        sex = new QLineEdit(verticalLayoutWidget);
        sex->setObjectName(QString::fromUtf8("sex"));

        verticalLayout->addWidget(sex);

        phoneNum = new QLineEdit(verticalLayoutWidget);
        phoneNum->setObjectName(QString::fromUtf8("phoneNum"));

        verticalLayout->addWidget(phoneNum);

        birth = new QLineEdit(verticalLayoutWidget);
        birth->setObjectName(QString::fromUtf8("birth"));

        verticalLayout->addWidget(birth);

        idNum = new QLineEdit(verticalLayoutWidget);
        idNum->setObjectName(QString::fromUtf8("idNum"));

        verticalLayout->addWidget(idNum);

        nation = new QLineEdit(verticalLayoutWidget);
        nation->setObjectName(QString::fromUtf8("nation"));

        verticalLayout->addWidget(nation);

        oriplace = new QLineEdit(verticalLayoutWidget);
        oriplace->setObjectName(QString::fromUtf8("oriplace"));

        verticalLayout->addWidget(oriplace);

        remarks = new QLineEdit(verticalLayoutWidget);
        remarks->setObjectName(QString::fromUtf8("remarks"));

        verticalLayout->addWidget(remarks);

        verticalLayoutWidget_2 = new QWidget(Dialog_select);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(60, 110, 160, 290));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_2->addWidget(label_7);

        label_9 = new QLabel(verticalLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_2->addWidget(label_9);

        label_10 = new QLabel(verticalLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_2->addWidget(label_10);

        label_8 = new QLabel(verticalLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_2->addWidget(label_8);

        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);


        retranslateUi(Dialog_select);

        QMetaObject::connectSlotsByName(Dialog_select);
    } // setupUi

    void retranslateUi(QDialog *Dialog_select)
    {
        Dialog_select->setWindowTitle(QApplication::translate("Dialog_select", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog_select", "\350\257\267\350\276\223\345\205\245\350\246\201\346\237\245\350\257\242\347\232\204\345\255\246\347\224\237\345\255\246\345\217\267", 0, QApplication::UnicodeUTF8));
        sel_buto->setText(QApplication::translate("Dialog_select", "\347\241\256\350\256\244\350\276\223\345\205\245", 0, QApplication::UnicodeUTF8));
        ret->setText(QApplication::translate("Dialog_select", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog_select", "\345\255\246\345\217\267", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog_select", "\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Dialog_select", "\346\200\247\345\210\253", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Dialog_select", "\350\201\224\347\263\273\346\226\271\345\274\217", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Dialog_select", "\345\207\272\347\224\237\346\227\245\346\234\237", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Dialog_select", "\350\272\253\344\273\275\350\257\201\345\217\267", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Dialog_select", "\346\260\221\346\227\217", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Dialog_select", "\347\261\215\350\264\257", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Dialog_select", "\345\244\207\346\263\250", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog_select: public Ui_Dialog_select {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SELECT_H
