#ifndef _SOCKAPI_H__
#define _SOCKAPI_H__

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include <threadpool.h>
#include <iostream>
using namespace std;

class CNotify
{
private:
	int   m_nType;//消息号
	int   m_nLen;//包长度
	int   m_nBlock;//多少块
	int   m_nSize;//每一个块多大
	char* m_pData;//放所有序列化之后的数据
	friend class CSockApi;
};
class CSockApi
{
public:
	enum{
		STS_ER,
		STS_CL,
		STS_OK
	};
public:
	CSockApi();
	CSockApi(int nSock);
	virtual ~CSockApi();

	int send_notify(CNotify& pNotify);
	int receive_notify(CNotify& pNotify);

	CNotify* receive_notify();
	int send_notify(CNotify* pNotify);

	void closeS();
	void set_sock(int nSock);
	int  get_sock()
	{
		return m_nSock;
	}
	int get_status()
	{
		return m_nStatus;
	}
	int get_peer(char* szPeer);
	int get_local(char* szLocal);

public:
	int readN(char* pBuf, int nLen);
	int writeN(const char* pBuf, int nLen);

protected:
	int m_nSock;
	int m_nPort;
	int m_nStatus;
	CNotify notify;
	struct sockaddr_in addr;

};


class CServerSock : public CSockApi
{
public:
	int  listenS();
	int  acceptS();
	void shutdown();
	int  start(int nPort);
	void set_port(int nPort);
};

class CClientSock : public CSockApi
{
public:
	CClientSock();
	CClientSock(int nPort, const char* szHostName);
	void  set_portAndHost(int nPort,const char* szIP);
	int   connectS();
	void  reconnect();
private:
	char  m_szHostname[256];
};




#endif
