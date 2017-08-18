#include <string>
#include <iostream>
#include <tinyxml.h>
#include <map>
#include <vector>
#include <log.h>
#include <parsexml.h>
#include <mysql.h>
#include <threadpool.h>

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>



int main(int argc, char** argv) 
{	
ThreadPool pool(10);
pool.start();
pthread_t inum = 0;
	//创建sockfd
	int sockfd = socket(AF_INET,SOCK_STREAM,0);
	if(0 >= sockfd)
	{
		perror("socket");
		return -1;
	}

	//准备连接地址
	struct sockaddr_in addr = {};
	addr.sin_family = AF_INET;
	addr.sin_port = htons(10087);
	addr.sin_addr.s_addr = inet_addr("127.0.0.1");


	//绑定sockfd和通信地址
	int ret = bind(sockfd,(struct sockaddr*)&addr,sizeof(addr));
	if(0 > ret)
	{
		perror("bind");
		return -1;
	}

	//监听
	ret = listen(sockfd,50);
	if(0 > ret)
	{
		perror("listen");
		return -1;
	}

	//等待连接,接收不到连接会阻塞
	socklen_t len = sizeof(addr);
	inum = 0;
	for(;;inum++)
	{
		
		int fd = accept(sockfd,(struct sockaddr*)&addr,&len);
		if(0 >= fd)
		{
			perror("accept");
			return -1;
		}
		
		pool.setWork(fd);
		
			
		
	}
	

	return 0;
}




