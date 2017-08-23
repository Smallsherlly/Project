#include <sockApi.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>
#include <fcntl.h>
#include <log.h>
#include <errno.h>
using namespace std;

//const static char* strAuthor   = "@(#) $Author: flexible_pig $";
//const static char* strDate     = "@(#) $Date: 2017/08/18 15:34:50 $";
//const static char* strRevision = "@(#) $Revision: 1.1.2.12 $";
extern string LOG_LEVEL;
extern string LOG_FILE;
extern string LOG_PAHT;

CSockApi::CSockApi()
{
    m_nSock = -1;
    m_nPort = 0;
    m_nStatus = STS_CL;

}

CSockApi::CSockApi(int nSock)
{
    m_nSock = nSock;
    m_nPort = 0;
    m_nStatus = STS_OK;

}

CSockApi::~CSockApi()
{
    this->close();
}

int CSockApi::send_notify(CNotify& pNotify)
{
    return writeN(pNotify.get_send(),pNotify.get_size());
}

int CSockApi::receive_notify(CNotify& pNotify)
{
    readN((char*)&pNotify,16);
    pNotify.n2h();
    pNotify.resize(pNotify.get_len());
    char *pdata = pNotify.get_data();
    return readN(pdata,pNotify.get_len());

}
/*
CNotify* CSockApi::receive_notify()
{

    return &notify;
}
*/

int CSockApi::send_notify(CNotify* pNotify)
{

    return 1;
}

void CSockApi::close()
{
    if(m_nStatus != STS_CL)
    {
        int iRet = ::close(m_nSock);
        while(-1 == iRet && EINTR == errno)
        {
            iRet = ::close(m_nSock);
        }
        m_nSock = -1;
        m_nStatus = STS_CL;
    }
}

void CSockApi::set_sock(int nSock)
{
    this->close();
    m_nSock = nSock;
    m_nStatus = STS_CL;

    if(m_nSock >= 0)
    {
        m_nStatus = STS_OK;
    }
}


int CSockApi::readN(char* pBuf, int nLen)
{
    int nLeft = nLen;
    int nRead = 0;
    while(nLeft > 0)
    {
        nRead = read(m_nSock,pBuf,nLeft);
        if(nRead < 0)
        {
            if( errno == EINTR || errno == EAGAIN)
                continue;
            return nRead;
        }else if(nRead == 0)
        {
            break;
        }
        nLeft -= nRead;
        pBuf += nRead;
    }
    return (nLen - nLeft);
}

int CSockApi::writeN(const char* pBuf, int nLen)
{
    int nLeft = nLen;
    int nWrite = 0;
    while(nLeft > 0){
        nWrite = write(m_nSock,pBuf,nLeft);
        if(nWrite < 0){
            if( errno == EINTR || errno == EAGAIN)
                continue;
            return nWrite;
        }else if(nWrite == 0){
            break;
        }
        nLeft -= nWrite;
        pBuf += nWrite;
    }
    return (nLen-nLeft);
}

//服务端

int CServerSock::listen()
{
    if(::listen(m_nSock,1000) == -1){
        //LOG_ERROR("errno: %d listen error\n",errno);
        m_nStatus = STS_ER;
        return -1;
    }
    m_nStatus = STS_OK;
    return 0;

}

int CServerSock::accept()
{
    m_pthreadpool.start();
    while(1){
        struct sockaddr_in addr = {};
        socklen_t addrlen = sizeof(addr);
        int connfd = ::accept(m_nSock,(struct sockaddr*)&addr,&addrlen);
        if(-1 == connfd){
            continue;
        }
        //LOG_ERROR("client %s:%u connected!\n",inet_ntoa(addr.sin_addr),ntohs(addr.sin_port));
        m_pthreadpool.setWork(connfd);
    }
    return 0;
}

void CServerSock::shutdown()
{
    ::close(m_nSock);
}

int CServerSock::start(int nPort)
{
    m_nPort = nPort;
    m_nSock = socket(AF_INET,SOCK_STREAM,0);
    if(m_nSock == -1){
       // LOG_ERROR("errno: %d socket error\n",errno);
        m_nStatus = STS_ER;
        return -1;
    }
    int flags = fcntl(m_nSock,F_GETFL);
    if(flags == -1){
        //LOG_ERROR("errno: %d fcntl get error\n",errno);
    }
    flags |= O_NONBLOCK;
    int re = fcntl(m_nSock,F_SETFL,flags);
    if(re == -1){
        //LOG_ERROR("errno: %d fcntl get error\n",errno);
    }
    struct sockaddr_in addr;
    addr.sin_family = AF_INET;
    addr.sin_port = htons(m_nPort);
    addr.sin_addr.s_addr = INADDR_ANY;
    if(::bind(m_nSock,(struct sockaddr*)&addr,sizeof(addr)) == -1){
        //LOG_ERROR("errno: %d bind error\n",errno);
        m_nStatus = STS_ER;
        return -1;
    }
    return 0;
}

void CServerSock::set_port(int nPort)
{
    m_nPort = nPort;
    addr.sin_port = htons(m_nPort);
    int ret = bind(m_nSock,(struct sockaddr*)&addr,sizeof(addr));
    if(0 > ret)
    {
        perror("bind");
    }
}


//客户端
CClientSock::CClientSock()
{
    memset(m_szHostname,0,sizeof(m_szHostname));
    m_nSock = socket(AF_INET,SOCK_STREAM,0);
    addr.sin_family = AF_INET;
    addr.sin_port = htons(10087);
    addr.sin_addr.s_addr = inet_addr("127.0.0.1");

}

CClientSock::CClientSock(int nPort, const char* szHostName)
{
    m_nPort = nPort;
    strcpy(m_szHostname,szHostName);

    addr.sin_family = AF_INET;
    addr.sin_port = htons(nPort);
    addr.sin_addr.s_addr = inet_addr("127.0.0.1");
}

void CClientSock::set_portAndHost(int nPort,const char* szIP)
{
    m_nPort = nPort;
    addr.sin_port = htons(nPort);
    addr.sin_addr.s_addr = inet_addr(szIP);

}

int CClientSock::connect()
{
     if(::connect(m_nSock,(struct sockaddr*)&addr,sizeof(addr)) == -1){
       // LOG_ERROR("errno:%d connect to %s:%d error!\n",errno,m_szHostname,m_nPort);
        m_nStatus = STS_ER;
        return -1;
    }
     m_nStatus = STS_OK;
    return 0;
}

void CClientSock::reconnect()
{

}
