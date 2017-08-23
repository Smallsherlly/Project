#ifndef HDUSYS_H
#define HDUSYS_H

#include <QDialog>
#include <sockApi.h>
#include <class.h>
#include <threadpool.h>
#include <socknotify.h>
#include <tea_log.h>
#include <stu_log.h>

namespace Ui {
class hduSys;
}

class hduSys : public QDialog
{
    Q_OBJECT
    
public:
    explicit hduSys(QWidget *parent = 0);
    ~hduSys();

    
private slots:


    void on_tea_log_clicked();

    void on_stu_log_clicked();

private:
    Ui::hduSys *ui;
    Tea_log tea_log;
    Stu_log stu_log;

};

#endif // HDUSYS_H
