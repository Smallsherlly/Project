#ifndef _LOG_H__
#define _LOG_H__

#include <iostream>
#include <cstdio>
#include <fstream>
using namespace std;

#define LOGPATH "./data.txt"
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
/*
#define LOG(T) T log##T(fmt,args...)
#define logERROR(fmt,args...) printf("[error]%s line:%d "fmt,__FILE__,__LINE__,##args);

typedef void(*ERROR)(void);
#define LOG_DEBUG(fmt,args...) log_DEBUG("[error]%s line:%d func():%s "fmt,__FILE__,__LINE__,__func__ ,##args);
// “##”拼接
LOG(ERROR)
//LOG(INFO)
//LOG()
//LOG_DEBUG()

//生成三个函数

#define log_T() log##T
#define MAX(T) T max##T(T x,T y){\
	return x>y?x:y;\
}
// “##”拼接
MAX(int)
MAX(double)
MAX(string)
//生成三个函数
#define max(T) max##T
*/
class Log
{
public:
	Log();
	void Save();

};
#endif
