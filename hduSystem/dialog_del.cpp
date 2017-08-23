#include "dialog_del.h"
#include "ui_dialog_del.h"
#include <QMessageBox>

Dialog_del::Dialog_del(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_del)
{
    ui->setupUi(this);
    client.connect();
}

Dialog_del::~Dialog_del()
{
    delete ui;
}

void Dialog_del::on_ret_clicked()
{
  //  CNotify notify2(10000,0,1);
 //   client.send_notify(notify2);
    this->accept();
    emit ret();
}

void Dialog_del::on_del_buto_clicked()
{
    studentInfo stu;
    stu.m_id = ui->del_id->text().toInt();
    CNotify notify(10120,sizeof(studentInfo),1);
    notify.set_data(stu);
    client.send_notify(notify);
    CNotify notify_ret;
    while(!client.receive_notify(notify_ret));
    if(notify_ret.get_type() == 10121)
    {
        QMessageBox msg;
        msg.setText("操作成功！");
        msg.exec();
        ui->del_id->clear();
    }

}
