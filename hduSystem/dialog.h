#ifndef DIALOG_H
#define DIALOG_H
#include <QDialog>
#include <sockApi.h>
#include <class.h>
#include <threadpool.h>
#include <socknotify.h>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
   // void quit(CClientSock* client);
    void studentInfo_c(CClientSock& client);

private slots:
    void on_input_clicked();

    void on_ret_clicked();
public:
signals:
    void ret();

private:
    Ui::Dialog *ui;
    CClientSock client;
};
#endif // DIALOG_H
