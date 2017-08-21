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

#endif
