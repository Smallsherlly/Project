#ifndef TEA_LOG_H
#define TEA_LOG_H

#include <QDialog>
#include <sockApi.h>
#include <class.h>
#include <threadpool.h>
#include <socknotify.h>
#include <dialog_teacher.h>

namespace Ui {
class Tea_log;
}

class Tea_log : public QDialog
{
    Q_OBJECT
    
public:
    explicit Tea_log(QWidget *parent = 0);
    ~Tea_log();
    CClientSock client;
signals:
    void ret();
    void send(int);
private slots:
    void on_login_clicked();

    void on_ret_clicked();

private:
    Ui::Tea_log *ui;
    Dialog_teacher dialog_tea;
};

#endif // TEA_LOG_H
