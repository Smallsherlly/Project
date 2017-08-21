#include <log.h>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

string LOG_PATH;
string LOG_LEVEL;
string LOG_FILE;

Log::Log()
{
	//先清空错误日志的内容

	ParseXml parse("/home/ubuntu/flexible_pig/Learning/HugeProject/StudentInfoSys3.0/Server/conf/xsys.xml");
	parse.parse();
	LOG_PATH = parse.getValue("log_path");
	LOG_LEVEL = parse.getValue("log_level");
	LOG_FILE = parse.getValue("log_file");
	char path[256] = {};
	sprintf(path,"%s/%s",LOG_PATH.c_str(),LOG_FILE.c_str());
	ofstream fout(path);
	fout.close();
}


