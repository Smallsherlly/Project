#include <sockApi.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>
using namespace std;

CSockApi::CSockApi()
{
	
}

CSockApi::CSockApi(int nSock)
{
	m_nSock = nSock;
}

CSockApi::~CSockApi(){}

int CSockApi::send_notify()
{
	send(m_nSock,notify.m_pData,ntohl(notify.m_nLen),0);

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
	memcpy(pNotify.m_pData,buf,sizeof(buf));
	
	return 1;
}

CNotify* CSockApi::receive_notify()
{
	char buf[1024] = {};
	recv(m_nSock,buf,1024,0);
	int *p = (int*)buf;
	notify.m_nType = ntohl(*p++);
	notify.m_nLen = ntohl(*p++);
	notify.m_nBlock = ntohl(*p++);
	notify.m_nSize = ntohl(*p++);
	notify.m_pData = new char[1024];
	memcpy(notify.m_pData,buf,sizeof(buf));

	return &notify;
}


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

	memcpy(pBuf,notify.m_pData,nLen);
	return 1;
}

int CSockApi::writeN(const char* pBuf, int nLen)
{
	notify.m_nType = htonl(32);
	notify.m_nLen = htonl(nLen);
	notify.m_nBlock = htonl(1);
	notify.m_nSize = htonl(16+nLen);
	notify.m_pData = new char[1024];
	memcpy(notify.m_pData,&(notify.m_nType),4);
	memcpy(notify.m_pData+4,&(notify.m_nLen),4);
	memcpy(notify.m_pData+8,&(notify.m_nBlock),4);
	memcpy(notify.m_pData+12,&(notify.m_nSize),4);
	memcpy(notify.m_pData+16,pBuf,nLen);
	
	return 1;
}

//服务端

int CServerSock::listenS()
{
	return listen(m_nSock,100);
	
}

int CServerSock::acceptS()
{
	socklen_t len = sizeof(addr);
	m_nCock = accept(m_nSock,(struct sockaddr*)&addr,&len);
	return m_nSock;
}

void CServerSock::shutdown()
{
	closeS();
}

int CServerSock::start(int nPort)
{
	m_nSock = socket(AF_INET,SOCK_STREAM,0);
	addr.sin_family = AF_INET;
	addr.sin_port = htons(nPort);
	addr.sin_addr.s_addr = inet_addr("127.0.0.1");
	socklen_t len = sizeof(addr);
	bind(m_nSock,(struct sockaddr*)&addr,len);
	
	ThreadPool pool(1);
	pool.start();
	listenS();
	while(1)
	{
		acceptS();
		cout << "fd:" << m_nCock << endl;
		if(m_nCock!=-1)
			pool.setWork(m_nCock);
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

int CClientSock::connectS()
{
	connect(m_nSock,(struct sockaddr*)&addr,sizeof(addr));

	return 1;
}

void CClientSock::reconnect()
{

}
