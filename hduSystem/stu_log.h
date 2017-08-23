#ifndef STU_LOG_H
#define STU_LOG_H

#include <QDialog>
#include <sockApi.h>
#include <class.h>
#include <threadpool.h>
#include <socknotify.h>
#include <dialog_student.h>

namespace Ui {
class Stu_log;
}

class Stu_log : public QDialog
{
    Q_OBJECT
    
public:
    explicit Stu_log(QWidget *parent = 0);
    ~Stu_log();
    CClientSock client;
signals:
    void ret();
    void send(int);
    
private slots:


    void on_login_clicked();

    void on_ret_clicked();

private:
    Ui::Stu_log *ui;
    Dialog_student dialog_stu;
};

#endif // STU_LOG_H
