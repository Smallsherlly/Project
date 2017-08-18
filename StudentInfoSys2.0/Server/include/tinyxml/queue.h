#ifndef _QUEUE_H__
#define _QUEUE_H__

#include <pthread.h>
#include <unistd.h>
#include <iostream>
using namespace std;
#define MAX_QUEUE 200
template <typename T>

class Queue
{
public:
	Queue()
	{
		pthread_mutex_init(&lock,NULL);
		pthread_cond_init(&fullSignal,NULL);
		pthread_cond_init(&emptySignal,NULL);
		offset = 0;
		len = 0;
	}
    T pop()
    {
    	pthread_mutex_lock(&lock);
		while(len<=0)
		{
			pthread_cond_wait(&emptySignal,&lock);
		}
	
		T t = clts[offset];
		len--;
		offset = (offset+1==MAX_QUEUE?0:offset+1);
		pthread_cond_broadcast(&fullSignal);
	
		pthread_mutex_unlock(&lock);
		return t;
    }
    void push(T& clt)
    {
		
    	pthread_mutex_lock(&lock);
		while(len>=MAX_QUEUE)
		{
			pthread_cond_wait(&fullSignal,&lock);
		}
		
		
		clts[(offset+len)%MAX_QUEUE] = clt;
		len++;
		pthread_cond_broadcast(&emptySignal);
		pthread_mutex_unlock(&lock);
    
    }
private:
	T clts[MAX_QUEUE];
	int len;//数据池中数据个数
	int offset;//数据池中数据开始位置
	pthread_mutex_t lock;
	pthread_cond_t  emptySignal;
	pthread_cond_t  fullSignal;// 这三个参数要记得初始化
};

#endif // _QUEUE_H__
