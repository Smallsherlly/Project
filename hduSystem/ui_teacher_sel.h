/********************************************************************************
** Form generated from reading UI file 'teacher_sel.ui'
**
** Created: Sun Aug 20 04:13:51 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHER_SEL_H
#define UI_TEACHER_SEL_H

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

class Ui_teacher_sel
{
public:
    QPushButton *sel_buto;
    QPushButton *ret;
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
    QLabel *label_11;
    QLabel *label_6;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *id;
    QLineEdit *name;
    QLineEdit *sex;
    QLineEdit *phoneNum;
    QLineEdit *birth;
    QLineEdit *idNum;
    QLineEdit *nation;
    QLineEdit *work;
    QLineEdit *class_2;
    QLineEdit *remarks;

    void setupUi(QDialog *teacher_sel)
    {
        if (teacher_sel->objectName().isEmpty())
            teacher_sel->setObjectName(QString::fromUtf8("teacher_sel"));
        teacher_sel->resize(616, 524);
        sel_buto = new QPushButton(teacher_sel);
        sel_buto->setObjectName(QString::fromUtf8("sel_buto"));
        sel_buto->setGeometry(QRect(70, 460, 98, 27));
        ret = new QPushButton(teacher_sel);
        ret->setObjectName(QString::fromUtf8("ret"));
        ret->setGeometry(QRect(480, 460, 98, 27));
        verticalLayoutWidget_2 = new QWidget(teacher_sel);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(130, 80, 160, 320));
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

        label_11 = new QLabel(verticalLayoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_2->addWidget(label_11);

        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        verticalLayoutWidget = new QWidget(teacher_sel);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(310, 80, 160, 326));
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

        work = new QLineEdit(verticalLayoutWidget);
        work->setObjectName(QString::fromUtf8("work"));

        verticalLayout->addWidget(work);

        class_2 = new QLineEdit(verticalLayoutWidget);
        class_2->setObjectName(QString::fromUtf8("class_2"));

        verticalLayout->addWidget(class_2);

        remarks = new QLineEdit(verticalLayoutWidget);
        remarks->setObjectName(QString::fromUtf8("remarks"));

        verticalLayout->addWidget(remarks);


        retranslateUi(teacher_sel);

        QMetaObject::connectSlotsByName(teacher_sel);
    } // setupUi

    void retranslateUi(QDialog *teacher_sel)
    {
        teacher_sel->setWindowTitle(QApplication::translate("teacher_sel", "Dialog", 0, QApplication::UnicodeUTF8));
        sel_buto->setText(QApplication::translate("teacher_sel", "\346\230\276\347\244\272\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        ret->setText(QApplication::translate("teacher_sel", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("teacher_sel", "\345\267\245\345\217\267", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("teacher_sel", "\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("teacher_sel", "\346\200\247\345\210\253", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("teacher_sel", "\350\201\224\347\263\273\346\226\271\345\274\217", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("teacher_sel", "\345\207\272\347\224\237\346\227\245\346\234\237", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("teacher_sel", "\350\272\253\344\273\275\350\257\201\345\217\267", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("teacher_sel", "\346\260\221\346\227\217", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("teacher_sel", "\345\267\245\344\275\234\345\234\260\347\202\271", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("teacher_sel", "\346\211\200\345\234\250\347\217\255\347\272\247", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("teacher_sel", "\345\244\207\346\263\250", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class teacher_sel: public Ui_teacher_sel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHER_SEL_H
