#include"sockApi.h"

CSockApi::CSockApi(){}

CSockApi::CSockApi(int nSock){}

CSockApi::~CSockApi(){}

int CSockApi::send_notify(CNotify& pNotify)
{

}

int CSockApi::receive_notify()
{

}

CNotify* CSockApi::receive_notify()
{

}

int CSockApi::send_notify(CNotify* pNotify)
{

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

int CServerSock::listen()
{
	listen(m_nSock,100);
}

int CServerSock::accept()
{
	int fd = accpet(m_nSock,,);
}

void CServerSock::shutdown()
{

}

int CServerSock::start()
{

}

void CServerSock::set_port(int nPort)
{
	m_nPort = nPort;
}

CClientSock::CClientSock()
{

}

CClientSock::CClientSock(int nPort, const char* szHostName)
{
	m_nPort = nPort;
	strcpy(m_szHostName,szHostName);
}

void CClientSock::set_portAndHost(int nPort,const char* szIP)
{
	m_nPort = nPort;
	strcpy(m_szHostName,szHostName);
}

int CClientSock::connect()
{
	connect(m_nSock,,);
}

void CClientSock::reconnect()
{

}
