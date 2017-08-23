#include "tea_log.h"
#include "ui_tea_log.h"
#include <QMessageBox>

Tea_log::Tea_log(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tea_log)
{
    ui->setupUi(this);
    client.connect();
    connect(&dialog_tea,SIGNAL(ret()),this,SLOT(show()));
    connect(this,SIGNAL(send(int)),&dialog_tea,SLOT(recv(int)));
}

Tea_log::~Tea_log()
{
    delete ui;
}

void Tea_log::on_login_clicked()
{
    teacherLogInfo tea;

    tea.m_id = ui->id->text().toInt();
    strcpy(tea.m_psw,ui->psw->text().toStdString().c_str());
    CNotify notify(PROXY_TEACHER_LOGIN,sizeof(teacherLogInfo),1);
    notify.set_data(tea);
    client.send_notify(notify);
    CNotify notify_ret;
    while(!client.receive_notify(notify_ret));
    if(notify_ret.get_type() == PROXY_TEACHER_LOGIN_RET_Y)
    {
        this->hide();
        emit send(ui->id->text().toInt());
        ui->id->clear();
        ui->psw->clear();
        dialog_tea.show();
        dialog_tea.exec();
    }else
    {
        QMessageBox msg;
        msg.setText("对不起，帐号或密码错误！");
        msg.exec();
        ui->id->clear();
        ui->psw->clear();
    }
}

void Tea_log::on_ret_clicked()
{
   // CNotify notify2(10000,0,1);
   // client.send_notify(notify2);
    this->accept();
    emit ret();
}
