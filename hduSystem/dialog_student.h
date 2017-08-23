#ifndef DIALOG_STUDENT_H
#define DIALOG_STUDENT_H

#include <QDialog>
#include <dialog_del.h>
#include <dialog_select.h>
#include <dialog_update.h>
#include <dialog.h>
#include <sockApi.h>
#include <class.h>
#include <threadpool.h>
#include <socknotify.h>


namespace Ui {
class Dialog_student;
}

class Dialog_student : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog_student(QWidget *parent = 0);
    ~Dialog_student();
    
private slots:
    void on_quit_clicked();

    void on_return_2_clicked();
    void on_per_info_clicked();
    void recv(int);
    void on_alt_info_clicked();

public:
signals:
    void ret();
    void send(int);

private:
    Ui::Dialog_student *ui;
    Dialog dialog;
    Dialog_del dialog_del;
    Dialog_select dialog_select;
    Dialog_update dialog_update;
    CClientSock client;
    int m_id;
};

#endif // DIALOG_STUDENT_H
