/********************************************************************************
** Form generated from reading UI file 'teacher_alt.ui'
**
** Created: Sun Aug 20 03:41:30 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHER_ALT_H
#define UI_TEACHER_ALT_H

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

class Ui_teacher_alt
{
public:
    QPushButton *up_buto;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_8;
    QPushButton *ret;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *n_name;
    QLineEdit *n_sex;
    QLineEdit *n_phonum;
    QLineEdit *n_birth;
    QLineEdit *n_idNumber;
    QLineEdit *n_nation;
    QLineEdit *n_workp;
    QLineEdit *n_class;
    QLineEdit *n_remarks;

    void setupUi(QDialog *teacher_alt)
    {
        if (teacher_alt->objectName().isEmpty())
            teacher_alt->setObjectName(QString::fromUtf8("teacher_alt"));
        teacher_alt->resize(528, 481);
        up_buto = new QPushButton(teacher_alt);
        up_buto->setObjectName(QString::fromUtf8("up_buto"));
        up_buto->setGeometry(QRect(120, 372, 98, 27));
        verticalLayoutWidget_2 = new QWidget(teacher_alt);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(80, 30, 160, 331));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
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

        label_10 = new QLabel(verticalLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_2->addWidget(label_10);

        label_8 = new QLabel(verticalLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_2->addWidget(label_8);

        ret = new QPushButton(teacher_alt);
        ret->setObjectName(QString::fromUtf8("ret"));
        ret->setGeometry(QRect(290, 372, 98, 27));
        verticalLayoutWidget = new QWidget(teacher_alt);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(250, 30, 160, 326));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
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

        n_workp = new QLineEdit(verticalLayoutWidget);
        n_workp->setObjectName(QString::fromUtf8("n_workp"));

        verticalLayout->addWidget(n_workp);

        n_class = new QLineEdit(verticalLayoutWidget);
        n_class->setObjectName(QString::fromUtf8("n_class"));

        verticalLayout->addWidget(n_class);

        n_remarks = new QLineEdit(verticalLayoutWidget);
        n_remarks->setObjectName(QString::fromUtf8("n_remarks"));

        verticalLayout->addWidget(n_remarks);


        retranslateUi(teacher_alt);

        QMetaObject::connectSlotsByName(teacher_alt);
    } // setupUi

    void retranslateUi(QDialog *teacher_alt)
    {
        teacher_alt->setWindowTitle(QApplication::translate("teacher_alt", "Dialog", 0, QApplication::UnicodeUTF8));
        up_buto->setText(QApplication::translate("teacher_alt", "\347\241\256\350\256\244\350\276\223\345\205\245", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("teacher_alt", "\350\257\267\350\276\223\345\205\245\346\226\260\345\220\215\345\255\227", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("teacher_alt", "\350\257\267\350\276\223\345\205\245\346\226\260\346\200\247\345\210\253", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("teacher_alt", "\350\257\267\350\276\223\345\205\245\346\226\260\350\201\224\347\263\273\346\226\271\345\274\217", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("teacher_alt", "\350\257\267\350\276\223\345\205\245\346\226\260\347\224\237\346\227\245", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("teacher_alt", "\350\257\267\350\276\223\345\205\245\346\226\260\350\272\253\344\273\275\350\257\201\345\217\267", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("teacher_alt", "\350\257\267\350\276\223\345\205\245\346\226\260\346\260\221\346\227\217", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("teacher_alt", "\350\257\267\350\276\223\345\205\245\346\226\260\345\212\236\345\205\254\345\234\260\347\202\271", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("teacher_alt", "\350\257\267\350\276\223\345\205\245\346\226\260\346\211\200\345\234\250\347\217\255\347\272\247", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("teacher_alt", "\350\257\267\350\276\223\345\205\245\346\226\260\345\244\207\346\263\250", 0, QApplication::UnicodeUTF8));
        ret->setText(QApplication::translate("teacher_alt", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class teacher_alt: public Ui_teacher_alt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHER_ALT_H
