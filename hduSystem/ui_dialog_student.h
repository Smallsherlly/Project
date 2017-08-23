/********************************************************************************
** Form generated from reading UI file 'dialog_student.ui'
**
** Created: Sun Aug 20 09:14:41 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_STUDENT_H
#define UI_DIALOG_STUDENT_H

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

class Ui_Dialog_student
{
public:
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *per_info;
    QPushButton *alt_info;
    QPushButton *return_2;
    QPushButton *quit;
    QLabel *label;

    void setupUi(QDialog *Dialog_student)
    {
        if (Dialog_student->objectName().isEmpty())
            Dialog_student->setObjectName(QString::fromUtf8("Dialog_student"));
        Dialog_student->resize(586, 436);
        verticalLayoutWidget_2 = new QWidget(Dialog_student);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(150, 150, 211, 221));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        per_info = new QPushButton(verticalLayoutWidget_2);
        per_info->setObjectName(QString::fromUtf8("per_info"));

        verticalLayout_2->addWidget(per_info);

        alt_info = new QPushButton(verticalLayoutWidget_2);
        alt_info->setObjectName(QString::fromUtf8("alt_info"));

        verticalLayout_2->addWidget(alt_info);

        return_2 = new QPushButton(verticalLayoutWidget_2);
        return_2->setObjectName(QString::fromUtf8("return_2"));

        verticalLayout_2->addWidget(return_2);

        quit = new QPushButton(verticalLayoutWidget_2);
        quit->setObjectName(QString::fromUtf8("quit"));

        verticalLayout_2->addWidget(quit);

        label = new QLabel(Dialog_student);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 50, 231, 81));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);

        retranslateUi(Dialog_student);

        QMetaObject::connectSlotsByName(Dialog_student);
    } // setupUi

    void retranslateUi(QDialog *Dialog_student)
    {
        Dialog_student->setWindowTitle(QApplication::translate("Dialog_student", "Dialog", 0, QApplication::UnicodeUTF8));
        per_info->setText(QApplication::translate("Dialog_student", "\344\270\252\344\272\272\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        alt_info->setText(QApplication::translate("Dialog_student", "\344\277\256\346\224\271\344\270\252\344\272\272\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        return_2->setText(QApplication::translate("Dialog_student", "\350\277\224\345\233\236\344\270\212\345\261\202", 0, QApplication::UnicodeUTF8));
        quit->setText(QApplication::translate("Dialog_student", "\351\200\200\345\207\272\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog_student", "\346\254\242\350\277\216\350\277\233\345\205\245\345\255\246\347\224\237\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog_student: public Ui_Dialog_student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_STUDENT_H
