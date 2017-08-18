#ifndef _THREADPOOL_H__
#define _THREADPOOL_H__

#include "queue.h"
#include <iostream>
#include <list>
using namespace std;

class ThreadPool
{   
private:
    //消费容器里客户
    Queue<int> m_socketList;
    //所有的线程    
    list<pthread_t> m_pthreadList;
    //线程个数
	size_t m_num;
	pthread_t pth_id;
public:
   //构造函数
	ThreadPool(size_t num);
	~ThreadPool();
    static void * work(void *p);//线程函数
    void start();//启动所有线程
    void setWork(int socketid);
    void stop();

	
};


#endif //_THREADPOOL_H__
