#ifndef _LOG_H__
#define _LOG_H__

#include <iostream>
#include <cstdio>
#include <fstream>
using namespace std;

#define LOGPATH "/home/ubuntu/flexible_pig/Learning/HugeProject/Project2.0/conf/data.txt"

#if LOG_LEVEL>=4

#define LOG_ERROR(fmt,args...) {ofstream fout(LOGPATH,ios::app);char str[1024] = {};sprintf(str,"[error]%s line:%d func():%s "fmt,__FILE__,__LINE__,__func__ ,##args);printf("%s",str);fout << str; fout.close();}
#define LOG_INFO(fmt,args...)
#define LOG_TRACE(fmt,args...)
#define LOG_DEBUG(fmt,args...)

#elif LOG_LEVEL>=3
#define LOG_ERROR(fmt,args...) {ofstream fout(LOGPATH,ios::app);char str[1024] = {};sprintf(str,"[error]%s line:%d func():%s "fmt,__FILE__,__LINE__,__func__ ,##args);printf("%s",str);fout << str; fout.close();}
#define LOG_INFO(fmt,args...) {ofstream fout(LOGPATH,ios::app);char str[1024] = {};sprintf(str,"[error]%s line:%d func():%s "fmt,__FILE__,__LINE__,__func__ ,##args);printf("%s",str);fout << str; fout.close();}
#define LOG_TRACE(fmt,args...)
#define LOG_DEBUG(fmt,args...)

#elif LOG_LEVEL>=2
#define LOG_ERROR(fmt,args...) {ofstream fout(LOGPATH,ios::app);char str[1024] = {};sprintf(str,"[error]%s line:%d func():%s "fmt,__FILE__,__LINE__,__func__ ,##args);printf("%s",str);fout << str; fout.close();}
#define LOG_INFO(fmt,args...) {ofstream fout(LOGPATH,ios::app);char str[1024] = {};sprintf(str,"[error]%s line:%d func():%s "fmt,__FILE__,__LINE__,__func__ ,##args);printf("%s",str);fout << str; fout.close();}
#define LOG_TRACE(fmt,args...) {ofstream fout(LOGPATH,ios::app);char str[1024] = {};sprintf(str,"[error]%s line:%d func():%s "fmt,__FILE__,__LINE__,__func__ ,##args);printf("%s",str);fout << str; fout.close();}
#define LOG_DEBUG(fmt,args...)

#elif LOG_LEVEL>=1
#define LOG_ERROR(fmt,args...) {ofstream fout(LOGPATH,ios::app);char str[1024] = {};sprintf(str,"[error]%s line:%d func():%s "fmt,__FILE__,__LINE__,__func__ ,##args);printf("%s",str);fout << str; fout.close();}
#define LOG_INFO(fmt,args...) {ofstream fout(LOGPATH,ios::app);char str[1024] = {};sprintf(str,"[error]%s line:%d func():%s "fmt,__FILE__,__LINE__,__func__ ,##args);printf("%s",str);fout << str; fout.close();}
#define LOG_TRACE(fmt,args...) {ofstream fout(LOGPATH,ios::app);char str[1024] = {};sprintf(str,"[error]%s line:%d func():%s "fmt,__FILE__,__LINE__,__func__ ,##args);printf("%s",str);fout << str; fout.close();}
#define LOG_DEBUG(fmt,args...) {ofstream fout(LOGPATH,ios::app);char str[1024] = {};sprintf(str,"[error]%s line:%d func():%s "fmt,__FILE__,__LINE__,__func__ ,##args);printf("%s",str);fout << str; fout.close();}

#endif

class Log
{
public:
	Log();
	void Save();

};
#endif
