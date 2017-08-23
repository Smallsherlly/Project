#ifndef DIALOG_UPDATE_H
#define DIALOG_UPDATE_H

#include <QDialog>
#include <sockApi.h>
#include <class.h>
#include <threadpool.h>
#include <socknotify.h>

namespace Ui {
class Dialog_update;
}

class Dialog_update : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog_update(QWidget *parent = 0);
    ~Dialog_update();
public :
signals:
    void ret();
    
private slots:
    void on_ret_clicked();

    void on_up_buto_clicked();

    void recv(int);

private:
    Ui::Dialog_update *ui;
    CClientSock client;
    int m_id;
};

#endif // DIALOG_UPDATE_H
