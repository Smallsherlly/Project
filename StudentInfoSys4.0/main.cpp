#include <string>
#include <iostream>
#include <tinyxml.h>
#include <map>
#include <vector>
#include <log.h>
#include <parsexml.h>
#include <mysql.h>
#include <errno.h>
#include <sockApi.h>
#include <threadpool.h>
#include <class.h>



int main(int argc, char** argv) 
{	
	studentInfo stu(14036833,"石婷婷","女","18177347481","1996-09-26","330327199605268181","汉族","浙苍","傻");
	
	
	CNotify notify(10110,sizeof(stu),1);
	notify.set_data(stu);

	CClientSock client;
	client.connect();
	client.send_notify(notify);
	CNotify notify2(10000,0,1);
	//cout << "type:" << notify2.get_type() << endl;
	notify2.set_data(stu);
	client.send_notify(notify);
	client.send_notify(notify2);
	
	return 0;
}




