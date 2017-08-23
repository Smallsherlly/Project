/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Sun Aug 20 09:14:41 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

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

class Ui_Dialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *id;
    QLineEdit *name;
    QLineEdit *sex;
    QLineEdit *phonum;
    QLineEdit *birth;
    QLineEdit *idnum;
    QLineEdit *nation;
    QLineEdit *oriplace;
    QLineEdit *remarks;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *m_id;
    QLabel *m_name;
    QLabel *m_sex;
    QLabel *m_phnum;
    QLabel *m_birth;
    QLabel *m_idNum;
    QLabel *m_nation;
    QLabel *m_oriplace;
    QLabel *m_remarks;
    QPushButton *input;
    QPushButton *ret;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(505, 408);
        verticalLayoutWidget = new QWidget(Dialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(230, 50, 160, 293));
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

        phonum = new QLineEdit(verticalLayoutWidget);
        phonum->setObjectName(QString::fromUtf8("phonum"));

        verticalLayout->addWidget(phonum);

        birth = new QLineEdit(verticalLayoutWidget);
        birth->setObjectName(QString::fromUtf8("birth"));

        verticalLayout->addWidget(birth);

        idnum = new QLineEdit(verticalLayoutWidget);
        idnum->setObjectName(QString::fromUtf8("idnum"));

        verticalLayout->addWidget(idnum);

        nation = new QLineEdit(verticalLayoutWidget);
        nation->setObjectName(QString::fromUtf8("nation"));

        verticalLayout->addWidget(nation);

        oriplace = new QLineEdit(verticalLayoutWidget);
        oriplace->setObjectName(QString::fromUtf8("oriplace"));

        verticalLayout->addWidget(oriplace);

        remarks = new QLineEdit(verticalLayoutWidget);
        remarks->setObjectName(QString::fromUtf8("remarks"));

        verticalLayout->addWidget(remarks);

        verticalLayoutWidget_2 = new QWidget(Dialog);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(110, 50, 111, 291));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        m_id = new QLabel(verticalLayoutWidget_2);
        m_id->setObjectName(QString::fromUtf8("m_id"));

        verticalLayout_2->addWidget(m_id);

        m_name = new QLabel(verticalLayoutWidget_2);
        m_name->setObjectName(QString::fromUtf8("m_name"));

        verticalLayout_2->addWidget(m_name);

        m_sex = new QLabel(verticalLayoutWidget_2);
        m_sex->setObjectName(QString::fromUtf8("m_sex"));

        verticalLayout_2->addWidget(m_sex);

        m_phnum = new QLabel(verticalLayoutWidget_2);
        m_phnum->setObjectName(QString::fromUtf8("m_phnum"));

        verticalLayout_2->addWidget(m_phnum);

        m_birth = new QLabel(verticalLayoutWidget_2);
        m_birth->setObjectName(QString::fromUtf8("m_birth"));

        verticalLayout_2->addWidget(m_birth);

        m_idNum = new QLabel(verticalLayoutWidget_2);
        m_idNum->setObjectName(QString::fromUtf8("m_idNum"));

        verticalLayout_2->addWidget(m_idNum);

        m_nation = new QLabel(verticalLayoutWidget_2);
        m_nation->setObjectName(QString::fromUtf8("m_nation"));

        verticalLayout_2->addWidget(m_nation);

        m_oriplace = new QLabel(verticalLayoutWidget_2);
        m_oriplace->setObjectName(QString::fromUtf8("m_oriplace"));

        verticalLayout_2->addWidget(m_oriplace);

        m_remarks = new QLabel(verticalLayoutWidget_2);
        m_remarks->setObjectName(QString::fromUtf8("m_remarks"));

        verticalLayout_2->addWidget(m_remarks);

        input = new QPushButton(Dialog);
        input->setObjectName(QString::fromUtf8("input"));
        input->setGeometry(QRect(120, 370, 98, 27));
        ret = new QPushButton(Dialog);
        ret->setObjectName(QString::fromUtf8("ret"));
        ret->setGeometry(QRect(280, 370, 98, 27));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        m_id->setText(QApplication::translate("Dialog", "\345\255\246\345\217\267", 0, QApplication::UnicodeUTF8));
        m_name->setText(QApplication::translate("Dialog", "\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        m_sex->setText(QApplication::translate("Dialog", "\346\200\247\345\210\253", 0, QApplication::UnicodeUTF8));
        m_phnum->setText(QApplication::translate("Dialog", "\350\201\224\347\263\273\346\226\271\345\274\217", 0, QApplication::UnicodeUTF8));
        m_birth->setText(QApplication::translate("Dialog", "\345\207\272\347\224\237\346\227\245\346\234\237", 0, QApplication::UnicodeUTF8));
        m_idNum->setText(QApplication::translate("Dialog", "\350\272\253\344\273\275\350\257\201\345\217\267", 0, QApplication::UnicodeUTF8));
        m_nation->setText(QApplication::translate("Dialog", "\346\260\221\346\227\217", 0, QApplication::UnicodeUTF8));
        m_oriplace->setText(QApplication::translate("Dialog", "\347\261\215\350\264\257", 0, QApplication::UnicodeUTF8));
        m_remarks->setText(QApplication::translate("Dialog", "\345\244\207\346\263\250", 0, QApplication::UnicodeUTF8));
        input->setText(QApplication::translate("Dialog", "\347\241\256\350\256\244\350\276\223\345\205\245", 0, QApplication::UnicodeUTF8));
        ret->setText(QApplication::translate("Dialog", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
