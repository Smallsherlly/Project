#include <mysql.h>
#include <mysql/mysql.h>
#include <cstring>

SQL::SQL()
{
	memset(msg,0,sizeof(msg)/sizeof(msg[0]));
}

SQL::~SQL(){}

	/*
	功能：
		初始化数据库
		连接数据训
		设置字符集
	返回值：
		int: 0表示成功，-1表示失败
	参数：
	   database:数据库名称
	   host:数据库服务ip
	   port:数据库端口
	   user:数据库用户名
	   passwd:数据库密码
	   charset:字符集
	*/
int SQL::Connect(const char *database,const char *host,const char *port,const char *user,const char *passwd,const char  *charset)
{
	conn = mysql_init(NULL);
	if (!mysql_real_connect(conn,host,user,passwd,database,0,NULL,0)) 
    {
        sprintf(msg, "%s\n%s",msg,mysql_error(conn));
        return -1;
    }
    if(mysql_set_character_set(conn,charset))
    {
    	printf("set_character error");
    	return -1;
	}
	return 0;
}
/*
	功能：
		查询数据
	参数：
		sql:查询的SQL语句
	*/
int SQL::Select(const char *sql,list<vector<string> >& listRes)
{
	MYSQL_RES *res;
    MYSQL_ROW row;
  
    size_t i = 0;

	if(mysql_query(conn,sql))
	{
		sprintf(msg, "%s%s\n",msg,mysql_error(conn));
        return -1;
	}
	
	res = mysql_use_result(conn);
	while ((row = mysql_fetch_row(res)) != NULL)
	{
		vector<string> v_str;
		for(i=0; i<mysql_num_fields(res); i++)
		{
	    	printf("%s ", row[i]);
			if(row[i] == NULL)
				break;
	    	string str(row[i]);
	    	v_str.push_back(str);
	  	}
	  	listRes.push_back(v_str);
	  	cout << endl;
	}
	
    mysql_free_result(res);
	return 0;
}

/*
		Insert,Update,Delete三个函数：
		返回值：
			-1表示失败，其余表示影响表数据的行数
	*/
int SQL::Insert(const char* sql)
{
	if(mysql_query(conn,sql))
	{
		sprintf(msg, "%s%s\n",msg,mysql_error(conn));
        return -1;
	}
	return 0;
}

int SQL::Update(const char* sql)
{
	list<MYSQL_RES*> listres; 
	if(mysql_query(conn,sql))
	{
		sprintf(msg, "%s%s\n",msg,mysql_error(conn));
        return -1;
	}
	return 0;
}

int SQL::Delete(const char* sql)
{
	if(mysql_query(conn,sql))
	{
		sprintf(msg, "%s%s\n",msg,mysql_error(conn));
        return -1;
	}
	return 0;
}

int SQL::Create(const char* sql)
{
	if(mysql_query(conn,sql))
	{
		sprintf(msg, "%s%s\n",msg,mysql_error(conn));
        return -1;
	}
	return 0;
}

void SQL::Close()
{
	mysql_close(conn);
}
/*
	功能：
		获得错误信息
*/
const char* SQL::getErr()
{
	return msg;
}



