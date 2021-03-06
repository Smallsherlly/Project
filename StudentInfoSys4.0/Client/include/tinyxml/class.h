#ifndef _CLASS_H__
#define _CLASS_H__

#include <iostream>
#include <cstring>
#include <socknotify.h>
using namespace std;


enum type{
	PROXY_STUDENT_INFO_ADD      =  10110,	
	PROXY_STUDENT_INFO_ADD_RET  =  10111,

	PROXY_STUDENT_INFO_DEL      =  10120,
	PROXY_STUDENT_INFO_DEL_RET  =  10121,
	
	PROXY_STUDENT_INFO_ALT      =  10130,
	PROXY_STUDENT_INFO_ALT_RET  =  10131,
	
	PROXY_STUDENT_INFO_CHE      =  10140,
	PROXY_STUDENT_INFO_CHE_RET  =  10141,
	
	PROXY_TEACHER_INFO_ADD      =  10210,	
	PROXY_TEACHER_INFO_ADD_RET  =  10211,

	PROXY_TEACHER_INFO_DEL      =  10220,
	PROXY_TEACHER_INFO_DEL_RET  =  10221,
	
	PROXY_TEACHER_INFO_ALT      =  10230,
	PROXY_TEACHER_INFO_ALT_RET  =  10231,
	
	PROXY_TEACHER_INFO_CHE      =  10240,
	PROXY_TEACHER_INFO_CHE_RET  =  10241,
	
	PROXY_STUDENT_LOGIN         =  20100,
	PROXY_STUDENT_LOGIN_RET_Y   =  20166,
	PROXY_STUDENT_LOGIN_RET_N   =  20199,
	PROXY_TEACHER_LOGIN         =  20200,
	PROXY_TEACHER_LOGIN_RET_Y   =  20266,
	PROXY_TEACHER_LOGIN_RET_N   =  20299
};

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
	
	
	BEGIN_SOCK_SERIALIZE
	SOCK_FIELD_SERIALIZE(m_id)
	END_SOCK_SERIALIZE
};

class studentLogInfo
{
public:
	int m_id;
	char m_psw[20];
	BEGIN_SOCK_SERIALIZE
	SOCK_FIELD_SERIALIZE(m_id)
	END_SOCK_SERIALIZE
};

class teacherLogInfo
{
public:
	int m_id;
	char m_psw[20];
	BEGIN_SOCK_SERIALIZE
	SOCK_FIELD_SERIALIZE(m_id)
	END_SOCK_SERIALIZE
};

class teacherInfo
{
public:
	int m_id;
	char m_name[20];
	char m_sex[5];
	char m_phoneNumber[15];
	char m_birth[20];
	char m_idNumber[20];
	char m_nation[10];
	char m_workPlace[20];
	int m_insClass;
	char m_remarks[20];
	
	
	BEGIN_SOCK_SERIALIZE
	SOCK_FIELD_SERIALIZE(m_id)
	SOCK_FIELD_SERIALIZE(m_insClass)
	END_SOCK_SERIALIZE
};


#endif
