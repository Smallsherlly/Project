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




int main(int argc, char** argv) 
{	

	Log log;
	CServerSock server;
	server.start(10087);
	server.listen();
	server.accept();
	return 0;
}




