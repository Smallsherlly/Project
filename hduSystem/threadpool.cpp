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
#include <log.h>
#include <class.h>
#include <sockApi.h>
#include <socknotify.h>

extern string LOG_LEVEL;
extern string LOG_FILE;
extern string LOG_PATH;

char* proxy(CNotify notify);
char* proStudentInfo(CNotify notify);
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

    int fd = 0;
    while(1)
    {
        fd = 0;
        while(!fd)
        {
            cout << "pth_id" << pthread_self() << endl;
            fd = pool->m_socketList.pop();

        }

        //接收请求
        CSockApi cs(fd);
        CNotify notify;
        while(!cs.receive_notify(notify));
        if(notify.get_type()==10000)
        {
            LOG_ERROR("disconnect!\n");
            break;
        }

        studentInfo stu;
        stu = *(studentInfo*)notify.get_data(&stu);

        LOG_DEBUG("sockid:%d\n",fd);
        LOG_ERROR("id:%d\nname:%s\n",stu.m_id,stu.m_name);

        //SQL sql;
       // sql.Connect();
        //sql.Insert(proxy(notify));

    }
    return pool;
}//线程函数
void ThreadPool::start()//启动所有线程
{
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


char* proxy(CNotify notify)
{
    switch(notify.get_type()%10000/100)
    {
        case 1:

            return proStudentInfo(notify);

        default:
            break;
    }
    return NULL;
}

char* proStudentInfo(CNotify notify)
{
    char* buf = new char[1024];
    switch(notify.get_type())
    {
        case PROXY_STUDENT_INFO_ADD:
            studentInfo stu;
            stu = *(studentInfo*)notify.get_data();
            sprintf(buf,"insert into studentInfo (id,name,sex,phoneNumber,birth,idNumber,nation,originPlace,remarks)values(%d,'%s','%s','%s','%s','%s','%s','%s','%s')",stu.m_id,stu.m_name,stu.m_sex,stu.m_phoneNumber,stu.m_birth,stu.m_idNumber,stu.m_nation,stu.m_originPlace,stu.m_remarks);

            return buf;
        case PROXY_STUDENT_INFO_ADD_RET:

            break;
        case PROXY_STUDENT_INFO_DEL:

            break;
        case PROXY_STUDENT_INFO_DEL_RET:

            break;
        case PROXY_STUDENT_INFO_ALT:

            break;
        case PROXY_STUDENT_INFO_ALT_RET:

            break;
        case PROXY_STUDENT_INFO_CHE:

            break;
        case PROXY_STUDENT_INFO_CHE_RET:

            break;
        default:
            LOG_ERROR("singnal error\n");
            break;
    }

    return buf;
}