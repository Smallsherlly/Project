#include"sockApi.h"

CSockApi::CSockApi(){}

CSockApi::CSockApi(int nSock){}

CSockApi::~CSockApi(){}

int CSockApi::send_notify(CNotify& pNotify)
{
	send(m_nSock,&pNotify,sizeof(CNotify),0);
}

int CSockApi::receive_notify()
{
	CNotify note;
	recv(m_nSock,&note,sizeof(CNotify),0);
}

CNotify* CSockApi::receive_notify()
{
	CNotify* note;
	recv(m_nsock,note,sizeof(CNotify),0);
	return note;
}

int CSockApi::send_notify(CNotify* pNotify)
{
	send(m_nSock,pNotify,sizeof(CNotify),0);
}

void CSockApi::close()
{

}

void CSockApi::set_sock(int nSock)
{
	m_nSock = nSock;
}

int CSockApi::get_peer(char* szPeer)
{

}

int CSockApi::get_local(char* szLocal)
{

}

//服务端
int CServerSock::listen()
{
	listen(m_nSock,100);
	
}

int CServerSock::accept()
{
	int fd = accpet(m_nSock,,);
	return fd;
}

void CServerSock::shutdown()
{

}

int CServerSock::start()
{
	ThreadPool pool(10);
	pool.start();
	while(1)
	{
		pool.setWork(accept());
	}
}

void CServerSock::set_port(int nPort)
{
	m_nPort = nPort;
}


//客户端
CClientSock::CClientSock()
{

}

CClientSock::CClientSock(int nPort, const char* szHostName)
{
	m_nPort = nPort;
	strcpy(m_szHostName,szHostName);
	
	addr.sin_family = AF_INET;
	addr.sin_port = htons(nPort);
	addr.sin_addr.s_addr = inet_addr("127.0.0.1");
}

void CClientSock::set_portAndHost(int nPort,const char* szIP)
{
	m_nPort = nPort;
	strcpy(m_szHostName,szHostName);
	addr.sin_family = AF_INET;
	addr.sin_port = htons(nPort);
	addr.sin_addr.s_addr = inet_addr(szIP);
}

int CClientSock::connect()
{
	connect(m_nSock,,);
}

void CClientSock::reconnect()
{

}
