#include <string>
#include <iostream>
#include <tinyxml.h>
#include <map>
#include <vector>
#include <log.h>
#include <parsexml.h>
#include <mysql.h>
#include <sockApi.h>
#include <threadpool.h>
#include <class.h>



int main(int argc, char** argv) 
{	
	studentInfo stu(14036820,"林书思","男","17764590520","1996-06-16","330327199606169170","汉族","浙苍","帅");
	//string stuInfo;
	
	
	char buf[1024] = {};
	stu.serialize(0);
	memcpy(buf,&stu,sizeof(studentInfo));
	
	CClientSock client;
	client.connectS();
	client.writeN(buf,sizeof(studentInfo));
	while(1)
	{
		client.send_notify();
		sleep(1);
	}

	
	return 0;
}




