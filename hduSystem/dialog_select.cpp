#include "dialog_select.h"
#include "ui_dialog_select.h"

Dialog_select::Dialog_select(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_select),m_id(0)
{
    ui->setupUi(this);
    client.connect();
}

Dialog_select::~Dialog_select()
{
    delete ui;
}

void Dialog_select::on_ret_clicked()
{
  //  CNotify notify2(10000,0,1);
  //  client.send_notify(notify2);
    this->accept();
    emit ret();
}

void Dialog_select::on_sel_buto_clicked()
{
    studentInfo stu;

    stu.m_id = ui->sel_in->text().toInt();
    cout << stu.m_id << endl;
    CNotify notify(10140,sizeof(studentInfo),1);
    notify.set_data(stu);
    client.send_notify(notify);
    CNotify notify_ret;
    while(!client.receive_notify(notify_ret));

    stu = *(studentInfo*)notify_ret.get_data(&stu);

    ui->id->setText(QString::number(stu.m_id));

    ui->name->setText(QString(stu.m_name));

    ui->sex->setText(QString(stu.m_sex));

    ui->phoneNum->setText(QString(stu.m_phoneNumber));

    ui->birth->setText(QString(stu.m_birth));

    ui->idNum->setText(QString(stu.m_idNumber));

    ui->nation->setText(QString(stu.m_nation));

    ui->oriplace->setText(QString(stu.m_originPlace));

    ui->remarks->setText(QString(stu.m_remarks));

    ui->sel_in->clear();

}

void Dialog_select::recv(int id)
{
    m_id = id;
}
