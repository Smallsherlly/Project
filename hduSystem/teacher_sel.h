#ifndef TEACHER_SEL_H
#define TEACHER_SEL_H

#include <QDialog>
#include <sockApi.h>
#include <class.h>
#include <threadpool.h>
#include <socknotify.h>

namespace Ui {
class teacher_sel;
}

class teacher_sel : public QDialog
{
    Q_OBJECT
    
public:
    explicit teacher_sel(QWidget *parent = 0);
    ~teacher_sel();
    
private slots:
    void on_sel_buto_clicked();

    void on_ret_clicked();

    void recv(int);
public :
signals:
    void ret();


private:
    Ui::teacher_sel *ui;
    CClientSock client;
    int m_id;
};

#endif // TEACHER_SEL_H
