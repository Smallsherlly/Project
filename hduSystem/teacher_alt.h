#ifndef TEACHER_ALT_H
#define TEACHER_ALT_H

#include <QDialog>
#include <sockApi.h>
#include <class.h>
#include <threadpool.h>
#include <socknotify.h>


namespace Ui {
class teacher_alt;
}

class teacher_alt : public QDialog
{
    Q_OBJECT
    
public:
    explicit teacher_alt(QWidget *parent = 0);
    ~teacher_alt();
public :
signals:
    void ret();
    
private slots:
    void on_up_buto_clicked();

    void on_ret_clicked();

    void recv(int);

private:
    Ui::teacher_alt *ui;
     CClientSock client;
     int m_id;
};

#endif // TEACHER_ALT_H
