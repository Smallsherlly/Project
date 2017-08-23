#include "stu_log.h"
#include "ui_stu_log.h"
#include <QMessageBox>

Stu_log::Stu_log(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Stu_log)
{
    ui->setupUi(this);
    client.connect();
    connect(&dialog_stu,SIGNAL(ret()),this,SLOT(show()));
    connect(this,SIGNAL(send(int)),&dialog_stu,SLOT(recv(int)));
}

Stu_log::~Stu_log()
{
    delete ui;
}

void Stu_log::on_login_clicked()
{
    studentLogInfo stu;

    stu.m_id = ui->m_id->text().toInt();
    strcpy(stu.m_psw,ui->m_psw->text().toStdString().c_str());
    CNotify notify(PROXY_STUDENT_LOGIN,sizeof(studentLogInfo),1);
    notify.set_data(stu);
    client.send_notify(notify);
    CNotify notify_ret;
    while(!client.receive_notify(notify_ret));
    if(notify_ret.get_type() == PROXY_STUDENT_LOGIN_RET_Y)
    {
        this->hide();
        emit send(ui->m_id->text().toInt());
        ui->m_id->clear();
        ui->m_psw->clear();
        dialog_stu.show();
        dialog_stu.exec();
    }else
    {
        QMessageBox msg;
        msg.setText("对不起，帐号或密码错误！");
        msg.exec();
        ui->m_id->clear();
        ui->m_psw->clear();
    }
}

void Stu_log::on_ret_clicked()
{
  //  CNotify notify2(10000,0,1);
 //   client.send_notify(notify2);
    this->accept();
    emit ret();
}
