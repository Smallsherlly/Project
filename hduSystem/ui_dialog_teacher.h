/********************************************************************************
** Form generated from reading UI file 'dialog_teacher.ui'
**
** Created: Sun Aug 20 09:14:41 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_TEACHER_H
#define UI_DIALOG_TEACHER_H

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

class Ui_Dialog_teacher
{
public:
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *m_add;
    QPushButton *m_del;
    QPushButton *m_update;
    QPushButton *m_select;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *per_info;
    QPushButton *alt_info;
    QPushButton *return_2;
    QPushButton *quit;

    void setupUi(QDialog *Dialog_teacher)
    {
        if (Dialog_teacher->objectName().isEmpty())
            Dialog_teacher->setObjectName(QString::fromUtf8("Dialog_teacher"));
        Dialog_teacher->resize(598, 440);
        label = new QLabel(Dialog_teacher);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 30, 221, 71));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        verticalLayoutWidget = new QWidget(Dialog_teacher);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(300, 160, 171, 166));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        m_add = new QPushButton(verticalLayoutWidget);
        m_add->setObjectName(QString::fromUtf8("m_add"));

        verticalLayout->addWidget(m_add);

        m_del = new QPushButton(verticalLayoutWidget);
        m_del->setObjectName(QString::fromUtf8("m_del"));

        verticalLayout->addWidget(m_del);

        m_update = new QPushButton(verticalLayoutWidget);
        m_update->setObjectName(QString::fromUtf8("m_update"));

        verticalLayout->addWidget(m_update);

        m_select = new QPushButton(verticalLayoutWidget);
        m_select->setObjectName(QString::fromUtf8("m_select"));

        verticalLayout->addWidget(m_select);

        verticalLayoutWidget_2 = new QWidget(Dialog_teacher);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(70, 160, 160, 170));
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


        retranslateUi(Dialog_teacher);

        QMetaObject::connectSlotsByName(Dialog_teacher);
    } // setupUi

    void retranslateUi(QDialog *Dialog_teacher)
    {
        Dialog_teacher->setWindowTitle(QApplication::translate("Dialog_teacher", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog_teacher", "\346\254\242\350\277\216\350\277\233\345\205\245\346\225\231\345\270\210\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        m_add->setText(QApplication::translate("Dialog_teacher", "\345\242\236\345\212\240\345\255\246\347\224\237\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        m_del->setText(QApplication::translate("Dialog_teacher", "\345\210\240\351\231\244\345\255\246\347\224\237\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        m_update->setText(QApplication::translate("Dialog_teacher", "\344\277\256\346\224\271\345\255\246\347\224\237\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        m_select->setText(QApplication::translate("Dialog_teacher", "\346\237\245\350\257\242\345\255\246\347\224\237\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        per_info->setText(QApplication::translate("Dialog_teacher", "\344\270\252\344\272\272\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        alt_info->setText(QApplication::translate("Dialog_teacher", "\344\277\256\346\224\271\344\270\252\344\272\272\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        return_2->setText(QApplication::translate("Dialog_teacher", "\350\277\224\345\233\236\344\270\212\345\261\202", 0, QApplication::UnicodeUTF8));
        quit->setText(QApplication::translate("Dialog_teacher", "\351\200\200\345\207\272\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog_teacher: public Ui_Dialog_teacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_TEACHER_H
