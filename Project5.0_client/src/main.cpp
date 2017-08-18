#include <string>
#include <iostream>
#include <tinyxml.h>
#include <map>
#include <vector>
#include <log.h>
#include <parsexml.h>
#include <mysql.h>
#include <sockApi.h>
#include <threadpool.h>

class Student
{
public:
	int m_id;
	int m_age;
	char m_name[24];
public:
	Student(){};
	Student(int id,int age,char* name)
	{
		m_id = id;
		m_age = age;
		strcpy(m_name,name);
	}
	Student& operator=(const Student& other)
	{
		m_id = other.m_id;
		m_age = other.m_age;
		strcpy(m_name,other.m_name);
		return *this;
	}
	
	void h2n()
	{
		m_id = htonl(m_id);
		m_age = htonl(m_age);
	}
	
	void n2h()
	{
		m_id = ntohl(m_id);
		m_age = ntohl(m_age);
	}
};




int main(int argc, char** argv) 
{	

	CClientSock client;
	char buf[1024] = {};


	client.connectS();
	client.receive_notify();
	client.readN(buf,sizeof(Student)+16);
	int *p = (int*)buf;
	cout << "type:" << ntohl(*p)<< endl;
	Student stu;
	memcpy(&stu,(buf+16),sizeof(Student));
	stu.n2h();
	cout << "id:" << stu.m_id << endl;
	cout << "age:" << stu.m_age << endl;
	cout << "name:" << stu.m_name << endl;
	
	return 0;
}




