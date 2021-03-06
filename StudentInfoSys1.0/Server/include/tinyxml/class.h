#ifndef _CLASS_H__
#define _CLASS_H__

#include <iostream>
#include <cstring>
#include <socknotify.h>
using namespace std;

class studentInfo
{
public:
	int m_id;
	char m_name[20];
	char m_sex[5];
	char m_phoneNumber[15];
	char m_birth[20];
	char m_idNumber[20];
	char m_nation[10];
	char m_originPlace[20];
	char m_remarks[20];
	
	studentInfo()
	{
		m_id = 0;
		memset(m_name,0,sizeof(m_name));
		memset(m_sex,0,sizeof(m_sex));
		memset(m_phoneNumber,0,sizeof(m_phoneNumber));
		memset(m_birth,0,sizeof(m_birth));
		memset(m_idNumber,0,sizeof(m_idNumber));
		memset(m_nation,0,sizeof(m_nation));
		memset(m_originPlace,0,sizeof(m_originPlace));
		memset(m_remarks,0,sizeof(m_remarks));
	};
	
	studentInfo(int id,const char* name,const char* sex,const char* phoneNumber,const char* birth,const char* idNumber,const char* nation,const char* originPlace,const char* remarks)
	{
		m_id = id;
		strcpy(m_name,name);
		strcpy(m_sex,sex);
		strcpy(m_phoneNumber,phoneNumber);
		strcpy(m_birth,birth);
		strcpy(m_idNumber,idNumber);
		strcpy(m_nation,nation);
		strcpy(m_originPlace,originPlace);
		strcpy(m_remarks,remarks);
	}
	studentInfo& operator=(const studentInfo& other)
	{
		m_id = other.m_id;
		strcpy(m_name,other.m_name);
		strcpy(m_sex,other.m_sex);
		strcpy(m_phoneNumber,other.m_phoneNumber);
		strcpy(m_birth,other.m_birth);
		strcpy(m_idNumber,other.m_idNumber);
		strcpy(m_nation,other.m_nation);
		strcpy(m_originPlace,other.m_originPlace);
		strcpy(m_remarks,other.m_remarks);
		return *this;
	}
	BEGIN_SOCK_SERIALIZE
	SOCK_FIELD_SERIALIZE(m_id)
	END_SOCK_SERIALIZE
};

#endif
