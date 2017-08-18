#include "threadpool.h"
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include <sockApi.h>

class Student
{
public:
	int m_id;
	int m_age;
	char m_name[24];
public:
	Student()
	{
		m_id = 0;
		m_age = 0;
		memset(m_name,0,24);
	};
	Student(int id,int age,const char* name)
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


   //构造函数
ThreadPool::ThreadPool(size_t num)
{
	m_num = num;
}

ThreadPool::~ThreadPool()
{
	//stop();
}

void ThreadPool::stop()
{
	list<pthread_t>::iterator it = m_pthreadList.begin();
	for(; it!=m_pthreadList.end() ; it++)
	{
		pthread_join(*it,NULL);
	}
	m_pthreadList.clear();
}

void * ThreadPool::work(void *p)
{
	ThreadPool* pool = (ThreadPool*)p;
	cout << "test\n";
	int fd = 0;
	while(1)
	{
		fd = 0;
		while(!fd)
			fd = pool->m_socketList.pop();
		//接收请求
		Student stu1(1001,20,"林书思");
	
		stu1.h2n();
		char buf[1024] = {};

		memcpy(buf,&stu1,sizeof(Student));
	
		CSockApi cs(fd);
		cs.writeN(buf,32);
		cs.send_notify();

	}
	return pool;
}//线程函数
void ThreadPool::start()//启动所有线程
{
	cout << "start\n";
	for(size_t i=0; i<m_num; i++)
	{
		pthread_create(&pth_id,NULL,work,(void*)this);
		m_pthreadList.push_back(pth_id);
		
	}

}

void ThreadPool::setWork(int socketid)
{
	m_socketList.push(socketid);
}



