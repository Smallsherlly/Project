#include "queue.h"
#include <iostream>
using namespace std;
//类模板
/*
#define MAX_QUEUE 200
template <typename T>
T clts[MAX_QUEUE];
int len;//数据池中数据个数
int offset;//数据池中数据开始位置
pthread_mutex_t lock;
pthread_cond_t  emptySignal;
pthread_cond_t  fullSignal;
*/

T Queue::pop()
{
	pthread_mutex_lock(&lock);
	if(len<=0)
	{
		pthread_cond_wait(&emptySignal,&lock);
	}

	len--;
	pthread_cond_signal(&emptySignal);
	pthread_mutex_unlock(&lock);

}
void Queue::push(T& clt)
{
	pthread_mutex_lock(&lock);
	if(len>=MAX_QUEUE)
	{
		pthread_cond_wait(&fullSignal,&lock);
	}
	offset--;
	for(int i=offset; i<offset+len; i++)
	{
		clts[i] = clts[i+1];
	}
	clts[MAX_QUEUE] = clt;

	pthread_cond_signal(&emptySignal);
	pthread_mutex_unlock(&lock);
    
}

int main()
{

}
