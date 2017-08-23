#ifndef DIALOG_DEL_H
#define DIALOG_DEL_H

#include <QDialog>
#include <sockApi.h>
#include <class.h>
#include <threadpool.h>
#include <socknotify.h>
namespace Ui {
class Dialog_del;
}

class Dialog_del : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog_del(QWidget *parent = 0);
    ~Dialog_del();
public :
signals:
    void ret();
    
private slots:
    void on_ret_clicked();

    void on_del_buto_clicked();

private:
    Ui::Dialog_del *ui;
     CClientSock client;
};

#endif // DIALOG_DEL_H
