#ifndef _SOCKAPI_H__
#define _SOCKAPI_H__

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <types.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include <threadpool.h>
#include <iostream>
#include <socknotify.h>
using namespace std;



class CNotify
{
    public:
    enum
    {
        //NOTIFY_LEN = 12,
        RESERVE_LEN = 16,
        DATAOFF_LEN = 4
    };

public:
    CNotify():m_nType(0),m_nLen(0),m_nBlock(0),m_nSize(0),m_pData(NULL)
    {
        resize(0);
    }
    CNotify(int nType, int nLen, int nBlock = 0)
    {
        m_nType  = nType;
        m_nLen   = nLen;
        m_nBlock = nBlock;
        m_nSize  = nLen;
        m_pData  = NULL;
        resize(nLen);
    }
    CNotify(const CNotify& cNotify)
    {
        m_nType = cNotify.m_nType;
        m_nLen  = cNotify.m_nLen;
        m_nBlock = cNotify.m_nBlock;
        resize(m_nLen);
        memcpy(m_pData,cNotify.m_pData,m_nLen);
    }
    CNotify& operator=(const CNotify& cNotify)
    {
        if(&cNotify == this)
        {
            return *this;
        }
        m_nType  = cNotify.m_nType;
        m_nLen   = cNotify.m_nLen;
        m_nBlock = cNotify.m_nBlock;
        resize(m_nLen);
        memcpy(m_pData, cNotify.m_pData, m_nLen);
        return *this;
    }
    ~CNotify()
    {
        if( m_pData != NULL )
        {
            delete[] m_pData;
        }
        m_pData = NULL;
    }

public:
    void set_type(int nType)
    {
        m_nType = nType;
    }
    int get_type()
    {
        return m_nType;
    }
    int get_len()
    {
        return m_nLen < 0 ? 0 : m_nLen;
    }
	int get_size(){
		return m_nSize;	
	}
    int is_block()
    {
        return m_nBlock;
    }
    int resize(int nLen)
    {
		cout << "resize " << nLen << endl;
		if(nLen <=0) return -1;
        int nSize = nLen + RESERVE_LEN;
        if( m_nSize <= nSize )
        {
            if( m_pData != NULL )
            {
                delete[] m_pData;
            }
            m_nLen = nLen;
            m_nSize = nSize;
            m_pData = new char[m_nSize];
        }
        m_nLen = nLen;
        return nLen;
    }
    void set_data(const char* pData, int nLen)
    {
        resize(nLen);
        memcpy(m_pData+RESERVE_LEN,pData,m_nLen);
    }
    void set_data(char* pData,int nLen)
    {
        resize(nLen);
        memcpy(m_pData+RESERVE_LEN,pData,m_nLen);
    }

    template<class TYPE>
    void set_data(TYPE& data)
    {
        resize(sizeof(TYPE));
        data.serialize(HTON);
        memcpy(m_pData+RESERVE_LEN, &data, m_nLen);
    }

    void set_data(int32 iValue)
    {
        resize(sizeof(iValue));
        iValue = htonl(iValue);
        memcpy(m_pData+RESERVE_LEN,&iValue,m_nLen);
    }
    char* get_data()
    {
        return m_pData + RESERVE_LEN;
    }

    template<class TYPE>
    char* get_data(TYPE* p)
    {
        TYPE* pType = (TYPE*)(m_pData+RESERVE_LEN);
        pType->serialize(NTOH);
        return m_pData + RESERVE_LEN;
    }

    char* get_data(int32 iValue)
    {
        int32* pValue = (int32*)(m_pData + RESERVE_LEN);
        *pValue = ntohl(*pValue);
        return m_pData+RESERVE_LEN;
    }
    char* get_head()
    {
        return m_pData;
    }

    int set_head()
    {
        int* pValue = (int*)(m_pData);
        m_nType = htonl(*pValue);

        ++pValue;
        m_nLen = htonl(*pValue);

        ++pValue;
        m_nBlock = htonl(*pValue);

        return m_nLen;
    }

    char* get_recv()
    {
        resize(m_nLen);
        return m_pData + RESERVE_LEN;
    }

    char* get_send()
    {
        int* pValue = (int*)(m_pData);
        *pValue = htonl(m_nType);
        ++pValue;
        *pValue = htonl(m_nLen);
        ++pValue;
        *pValue = htonl(m_nBlock);
        ++pValue;
        *pValue = htonl(m_nSize);
        return m_pData;
    }

    void n2h()
    {
        m_nType  = ntohl(m_nType);
        m_nLen   = ntohl(m_nLen);
        m_nBlock = ntohl(m_nBlock);
        m_nSize  = ntohl(m_nSize);
    }
    void h2n()
    {
        m_nType  = htonl(m_nType);
        m_nLen   = htonl(m_nLen);
        m_nBlock = htonl(m_nBlock);
        m_nSize  = htonl(m_nSize);
    }
    void ntoh()
    {
        m_nType  = ntohl(m_nType);
        m_nLen   = ntohl(m_nLen);
        m_nBlock = ntohl(m_nBlock);
        m_nSize  = ntohl(m_nSize);
    }
    void hton()
    {
        m_nType  = htonl(m_nType);
        m_nLen   = htonl(m_nLen);
        m_nBlock = htonl(m_nBlock);
        m_nSize  = htonl(m_nSize);
    }

private:
    int   m_nType;
    int   m_nLen;
    int   m_nBlock;
    int   m_nSize;
    char* m_pData;
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

	//CNotify* receive_notify();
	int send_notify(CNotify* pNotify);

	void close();
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
	int m_nCock;
	int m_nPort;
	int m_nStatus;
	struct sockaddr_in addr;
	ThreadPool m_pthreadpool;

};


class CServerSock : public CSockApi
{
public:
	int  listen();
	int  accept();
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
	int   connect();
	void  reconnect();
private:
	char  m_szHostname[256];
};




#endif
