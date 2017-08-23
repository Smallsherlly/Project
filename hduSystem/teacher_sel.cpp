#include "teacher_sel.h"
#include "ui_teacher_sel.h"
#include <QMessageBox>

teacher_sel::teacher_sel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::teacher_sel)
{
    ui->setupUi(this);
    client.connect();
}

teacher_sel::~teacher_sel()
{
    delete ui;
}

void teacher_sel::on_sel_buto_clicked()
{
    teacherInfo tea;
    cout << m_id << endl;
    tea.m_id = m_id;
    CNotify notify(10240,sizeof(teacherInfo),1);
    notify.set_data(tea);
    client.send_notify(notify);
    CNotify notify_ret;
    while(!client.receive_notify(notify_ret));
    tea = *(teacherInfo*)notify_ret.get_data(&tea);

    ui->id->setText(QString::number(tea.m_id));

    ui->name->setText(QString(tea.m_name));

    ui->sex->setText(QString(tea.m_sex));

    ui->phoneNum->setText(QString(tea.m_phoneNumber));

    ui->birth->setText(QString(tea.m_birth));

    ui->idNum->setText(QString(tea.m_idNumber));

    ui->nation->setText(QString(tea.m_nation));

    ui->work->setText(QString(tea.m_workPlace));
    ui->class_2->setText((QString::number(tea.m_insClass)));

    ui->remarks->setText(QString(tea.m_remarks));

}

void teacher_sel::on_ret_clicked()
{
    this->accept();
    emit ret();
}

void teacher_sel::recv(int id)
{
    m_id = id;
}
