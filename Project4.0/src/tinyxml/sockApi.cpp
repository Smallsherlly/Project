#include <sockApi.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>
using namespace std;

CSockApi::CSockApi()
{
	m_nSock = socket(AF_INET,SOCK_STREAM,0);
	addr.sin_family = AF_INET;
	addr.sin_port = htons(10087);
	addr.sin_addr.s_addr = inet_addr("127.0.0.1");
	int ret = bind(m_nSock,(struct sockaddr*)&addr,sizeof(addr));
	if(0 > ret)
	{
		perror("bind");
	}
}

CSockApi::CSockApi(int nSock)
{
	m_nSock = nSock;
	addr.sin_family = AF_INET;
	addr.sin_port = htons(10087);
	addr.sin_addr.s_addr = inet_addr("127.0.0.1");
	int ret = bind(m_nSock,(struct sockaddr*)&addr,sizeof(addr));
	if(0 > ret)
	{
		perror("bind");
	}
}

CSockApi::~CSockApi(){}

int CSockApi::send_notify(CNotify& pNotify)
{
	send(m_nSock,pNotify.m_pData,pNotify.m_nLen,0);
	return 1;
}

int CSockApi::receive_notify(CNotify& pNotify)
{
	char buf[1024] = {};
	recv(m_nSock,buf,1024,0);
	int *p = (int*)buf;
	pNotify.m_nType = ntohl(*p++);
	pNotify.m_nLen = ntohl(*p++);
	pNotify.m_nBlock = ntohl(*p++);
	pNotify.m_nSize = ntohl(*p++);
	strcpy(pNotify.m_pData,buf);
	
	return 1;
}

/*CNotify* CSockApi::receive_notify()
{
	CNotify note;
	recv(m_nSock,&note,sizeof(CNotify),0);
	return &note;
}*/

int CSockApi::send_notify(CNotify* pNotify)
{
	send(m_nSock,pNotify->m_pData,pNotify->m_nLen,0);
	return 1;
}

void CSockApi::closeS()
{
	close(m_nSock);
}

void CSockApi::set_sock(int nSock)
{
	m_nSock = nSock;
}

int CSockApi::get_peer(char* szPeer)
{
	return 1;
}

int CSockApi::get_local(char* szLocal)
{
	return 1;
}

int CSockApi::readN(char* pBuf, int nLen)
{
	strcpy(pBuf,notify.m_pData);
	nLen = notify.m_nLen-16;
	return 1;
}

int CSockApi::writeN(const char* pBuf, int nLen)
{
	strcpy(notify.m_pData,pBuf);
	notify.m_nLen = 16+nLen;
	notify.m_nBlock = 1;
	notify.m_nSize = nLen;
	return 1;
}

//服务端
int CServerSock::listenS()
{
	listen(m_nSock,100);
	return 1;
}

int CServerSock::acceptS()
{
	socklen_t len = sizeof(addr);
	int fd = accept(m_nSock,(struct sockaddr*)&addr,&len);
	return fd;
}

void CServerSock::shutdown()
{

}

int CServerSock::start(int nPort)
{
	ThreadPool pool(10);
	pool.start();
	while(1)
	{
		pool.setWork(acceptS());
	}
	return 1;
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
	int ret = bind(m_nSock,(struct sockaddr*)&addr,sizeof(addr));
	if(0 > ret)
	{
		perror("bind");
	}
}

int CClientSock::connectS()
{
	connect(m_nSock,(struct sockaddr*)&addr,sizeof(addr));
	return 1;
}

void CClientSock::reconnect()
{

}
