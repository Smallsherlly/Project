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
#include <mysql.h>
#include <class.h>

#include <socknotify.h>

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
		//fd = 0;
		while(!fd)
		{
			cout << "pth_id" << pthread_self() << endl;
			fd = pool->m_socketList.pop();

		}
		//接收请求

		char buf[1024] = {};
		CSockApi cs(fd);
		cs.receive_notify();
		cs.readN(buf,sizeof(buf));
		int *p = (int*)buf;
	cout << "type:" << ntohl(*p)<< endl;
		studentInfo stu;
		memcpy(&stu,buf+16,sizeof(studentInfo));
		stu.serialize(1);
		cout << "sockid:" << fd << endl;
		cout << "pth_id:" << pthread_self() << endl;
		cout << "name:" << stu.m_name <<endl;
		cout << "id:" << stu.m_id << endl;
		SQL sql;
		sql.Connect();
		//sql.Insert(buf+16);
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


