#include <string>
#include <iostream>
#include <tinyxml.h>
#include <map>
#include <vector>
#include <log.h>
#include <parsexml.h>
#include <mysql.h>
#include <errno.h>
#include <sockApi.h>
#include <threadpool.h>
#include <class.h>


void studentInfo_c(CClientSock& client)
{
	int chos;
	cout << "欢迎进入学生信息管理系统！\n";
	cout << "1.增加学生信息\n";
	cout << "2.删除学生信息\n";
	cout << "3.修改学生信息\n";
	cout << "4.查询学生信息\n";
	cout << "5.退出学生信息管理系统\n";
	cin >> chos;
	switch(chos)
	{
		case 1:
		{
			studentInfo stu;
			cout << "请输入学生学号\n";
			cin >>stu.m_id;
			cout << "请输入学生姓名\n";
			cin >> stu.m_name;
			cout << "请输入学生性别\n";
			cin >> stu.m_sex;
			cout << "请输入学生联系方式\n";
			cin >> stu.m_phoneNumber;
			cout << "请输入学生出生日期\n";
			cin >> stu.m_birth;
			cout << "请输入学生身份证号\n";
			cin >> stu.m_idNumber;
			cout << "请输入学生民族\n";
			cin >> stu.m_nation;
			cout << "请输入学生籍贯\n";
			cin >> stu.m_originPlace;
			cout << "请输入备注\n";
			cin >> stu.m_remarks;
			CNotify notify(10110,sizeof(studentInfo),1);
			notify.set_data(stu);
			client.send_notify(notify);
			break;
		}	
		case 5:
			return;
		default:
			break;
	}
}

void quit(CClientSock* client)
{
	CNotify notify2(10000,0,1);
	client->send_notify(notify2);
}

int main(int argc, char** argv) 
{	
	/*studentInfo stu(14036833,"石婷婷","女","18177347481","1996-09-26","330327199605268181","汉族","浙苍","傻");
	
	CClientSock client;
	client.connect();
	int chos;
	while(1)
	{
		cout << "欢迎进入杭电信息管理系统！\n";
		cout << "请选择您要进行的操作：\n";
		cout << "1.学生信息管理\n";
		cout << "2.退出系统\n";
		cin >> chos;
		switch(chos)
		{
			case 1:
				studentInfo_c(client);
				break;
			case 2:
				quit(&client);
				break;
			default:
				break;
		}
		
	}*/
	studentLogInfo stu;
	//int id = 0;
	//char psw[20] = {};
	CClientSock client;
	client.connect();
	cout << "请输入账号\n";
	cin >> stu.m_id;
	cout << "请输入密码\n";
	cin >> stu.m_psw;
	CNotify notify(PROXY_TEACHER_LOGIN,sizeof(studentLogInfo),1);
	notify.set_data(stu);
	client.send_notify(notify);
	CNotify notify_ret;
	while(!client.receive_notify(notify_ret));
	cout << notify_ret.get_type() << endl;
	return 0;
}




