#include <string>
#include <iostream>
#include <tinyxml.h>
#include <map>
#include <vector>
#include <log.h>
using namespace std;


typedef pair<string,string> PAIR;
typedef multimap<PAIR,string> CON;
class ParseXml
{
private:
    string file_name;
    map<string,string> m_map;
    CON m_mmap;
   
public:
    ParseXml(string path)
    {
    	file_name = path;
    };
    ParseXml();
    void circle_fun(TiXmlElement*);
    
    void setXmlFile(string path)
    {
    	file_name = path;
    }
    
    void show();
    
    bool parse();
    
    string getValue(string name);
   //key value
    void setValue(string name,string value);
  
    void save()
    {
    	//doc.SaveFile(file_name);
    }
};


