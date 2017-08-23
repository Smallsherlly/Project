/********************************************************************************
** Form generated from reading UI file 'dialog_update.ui'
**
** Created: Sun Aug 20 09:16:39 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_UPDATE_H
#define UI_DIALOG_UPDATE_H

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

class Ui_Dialog_update
{
public:
    QPushButton *up_buto;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *n_id;
    QLineEdit *n_name;
    QLineEdit *n_sex;
    QLineEdit *n_phonum;
    QLineEdit *n_birth;
    QLineEdit *n_idNumber;
    QLineEdit *n_nation;
    QLineEdit *n_oriplace;
    QLineEdit *n_remarks;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label_9;
    QLabel *label_8;
    QPushButton *ret;

    void setupUi(QDialog *Dialog_update)
    {
        if (Dialog_update->objectName().isEmpty())
            Dialog_update->setObjectName(QString::fromUtf8("Dialog_update"));
        Dialog_update->resize(505, 466);
        up_buto = new QPushButton(Dialog_update);
        up_buto->setObjectName(QString::fromUtf8("up_buto"));
        up_buto->setGeometry(QRect(130, 410, 98, 27));
        verticalLayoutWidget = new QWidget(Dialog_update);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(260, 68, 160, 293));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        n_id = new QLineEdit(verticalLayoutWidget);
        n_id->setObjectName(QString::fromUtf8("n_id"));

        verticalLayout->addWidget(n_id);

        n_name = new QLineEdit(verticalLayoutWidget);
        n_name->setObjectName(QString::fromUtf8("n_name"));

        verticalLayout->addWidget(n_name);

        n_sex = new QLineEdit(verticalLayoutWidget);
        n_sex->setObjectName(QString::fromUtf8("n_sex"));

        verticalLayout->addWidget(n_sex);

        n_phonum = new QLineEdit(verticalLayoutWidget);
        n_phonum->setObjectName(QString::fromUtf8("n_phonum"));

        verticalLayout->addWidget(n_phonum);

        n_birth = new QLineEdit(verticalLayoutWidget);
        n_birth->setObjectName(QString::fromUtf8("n_birth"));

        verticalLayout->addWidget(n_birth);

        n_idNumber = new QLineEdit(verticalLayoutWidget);
        n_idNumber->setObjectName(QString::fromUtf8("n_idNumber"));

        verticalLayout->addWidget(n_idNumber);

        n_nation = new QLineEdit(verticalLayoutWidget);
        n_nation->setObjectName(QString::fromUtf8("n_nation"));

        verticalLayout->addWidget(n_nation);

        n_oriplace = new QLineEdit(verticalLayoutWidget);
        n_oriplace->setObjectName(QString::fromUtf8("n_oriplace"));

        verticalLayout->addWidget(n_oriplace);

        n_remarks = new QLineEdit(verticalLayoutWidget);
        n_remarks->setObjectName(QString::fromUtf8("n_remarks"));

        verticalLayout->addWidget(n_remarks);

        verticalLayoutWidget_2 = new QWidget(Dialog_update);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(90, 70, 160, 290));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_2->addWidget(label_7);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_9 = new QLabel(verticalLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_2->addWidget(label_9);

        label_8 = new QLabel(verticalLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_2->addWidget(label_8);

        ret = new QPushButton(Dialog_update);
        ret->setObjectName(QString::fromUtf8("ret"));
        ret->setGeometry(QRect(290, 410, 98, 27));

        retranslateUi(Dialog_update);

        QMetaObject::connectSlotsByName(Dialog_update);
    } // setupUi

    void retranslateUi(QDialog *Dialog_update)
    {
        Dialog_update->setWindowTitle(QApplication::translate("Dialog_update", "Dialog", 0, QApplication::UnicodeUTF8));
        up_buto->setText(QApplication::translate("Dialog_update", "\347\241\256\350\256\244\344\277\256\346\224\271", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog_update", "\345\255\246\345\217\267", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog_update", "\350\257\267\350\276\223\345\205\245\346\226\260\345\220\215\345\255\227", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Dialog_update", "\350\257\267\350\276\223\345\205\245\346\226\260\346\200\247\345\210\253", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Dialog_update", "\350\257\267\350\276\223\345\205\245\346\226\260\350\201\224\347\263\273\346\226\271\345\274\217", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Dialog_update", "\350\257\267\350\276\223\345\205\245\346\226\260\347\224\237\346\227\245", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Dialog_update", "\350\257\267\350\276\223\345\205\245\346\226\260\350\272\253\344\273\275\350\257\201\345\217\267", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog_update", "\350\257\267\350\276\223\345\205\245\346\226\260\346\260\221\346\227\217", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Dialog_update", "\350\257\267\350\276\223\345\205\245\346\226\260\347\261\215\350\264\257", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Dialog_update", "\350\257\267\350\276\223\345\205\245\346\226\260\345\244\207\346\263\250", 0, QApplication::UnicodeUTF8));
        ret->setText(QApplication::translate("Dialog_update", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog_update: public Ui_Dialog_update {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_UPDATE_H
