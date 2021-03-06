#ifndef _LOG_H__
#define _LOG_H__

#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include <parsexml.h>
using namespace std;

extern string LOG_LEVEL;
extern string LOG_FILE;
extern string LOG_PATH;

#define LOG_ERROR(fmt,args...) {char path[256] = {};sprintf(path,"%s/%s",LOG_PATH.c_str(),LOG_FILE.c_str());ofstream fout(path,ios::app);char str[1024] = {};sprintf(str,"[error]%s line:%d func():%s "fmt,__FILE__,__LINE__,__func__ ,##args);fout << str; fout.close();}
#define LOG_INFO(fmt,args...) {if(LOG_LEVEL == "DEBUG"||LOG_LEVEL == "TRACE"||LOG_LEVEL == "LOG_INFO"){char path[256] = {};sprintf(path,"%s/%s",LOG_PATH.c_str(),LOG_FILE.c_str());ofstream fout(path,ios::app);char str[1024] = {};sprintf(str,"[error]%s line:%d func():%s "fmt,__FILE__,__LINE__,__func__ ,##args);fout << str; fout.close();}}
#define LOG_TRACE(fmt,args...) {if(LOG_LEVEL== "DEBUG" && LOG_LEVEL == "TRACE"){char path[256] = {};sprintf(path,"%s/%s",LOG_PATH.c_str(),LOG_FILE.c_str());ofstream fout(path,ios::app);char str[1024] = {};sprintf(str,"[error]%s line:%d func():%s "fmt,__FILE__,__LINE__,__func__ ,##args);fout << str; fout.close();}}
#define LOG_DEBUG(fmt,args...) {if(LOG_LEVEL == "DEBUG"){char path[256] = {};sprintf(path,"%s/%s",LOG_PATH.c_str(),LOG_FILE.c_str());ofstream fout(path,ios::app);char str[1024] = {};sprintf(str,"[error]%s line:%d func():%s "fmt,__FILE__,__LINE__,__func__ ,##args);fout << str; fout.close();}}


class Log
{
public:
	Log();
	void Save();

};
#endif
