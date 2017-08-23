#ifndef DIALOG_SELECT_H
#define DIALOG_SELECT_H

#include <QDialog>
#include <sockApi.h>
#include <class.h>
#include <threadpool.h>
#include <socknotify.h>

namespace Ui {
class Dialog_select;
}

class Dialog_select : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog_select(QWidget *parent = 0);
    ~Dialog_select();
public :
signals:
    void ret();
    
private slots:
    void on_ret_clicked();
    void on_sel_buto_clicked();
    void recv(int);

private:
    Ui::Dialog_select *ui;
    CClientSock client;
    int m_id;
};

#endif // DIALOG_SELECT_H
