#ifndef DIALOG_TEACHER_H
#define DIALOG_TEACHER_H

#include <QDialog>
#include <sockApi.h>
#include <class.h>
#include <threadpool.h>
#include <socknotify.h>
#include <dialog_del.h>
#include <dialog_select.h>
#include <dialog_update.h>
#include <dialog.h>
#include <teacher_alt.h>
#include <teacher_sel.h>

namespace Ui {
class Dialog_teacher;
}

class Dialog_teacher : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog_teacher(QWidget *parent = 0);
    ~Dialog_teacher();
    
private slots:
    void on_m_add_clicked();

    void on_m_del_clicked();

    void on_m_update_clicked();

    void on_m_select_clicked();

    void on_return_2_clicked();

    void on_quit_clicked();
    void recv(int);
    void on_per_info_clicked();

    void on_alt_info_clicked();

public:
    signals:
    void ret();
    void send(int);


private:
    Ui::Dialog_teacher *ui;
    Dialog dialog;
    Dialog_del dialog_del;
    Dialog_select dialog_select;
    Dialog_update dialog_update;
    teacher_alt tea_alt;
    teacher_sel tea_sel;
    int m_id;
    CClientSock client;

};

#endif // DIALOG_TEACHER_H
