#include <string>
#include <iostream>
#include <tinyxml.h>
#include <map>
//#include <multimap>
#include <vector>
using namespace std;

typedef multimap<pair<string,string>,string> CON;
typedef map<pair<pair<string,string>,string>,string> TON;
class ParseXml
{
private:
    string file_name;
    multimap<string,string> m_map;
    multimap<string,string> m_map2;
    CON m_mmap;
    TON m_mmap2;
public:
    ParseXml(string path)
    {
    	file_name = path;
    };
    ParseXml();
    void circle_fun(TiXmlElement*,TiXmlElement*);
    void setXmlFile(string path);
    bool parse();
    string getValue(string name);//key value
    void setValue(string field,string name,string value);
    void save();
};

//遍历递归
void ParseXml::circle_fun(TiXmlElement* rootElement,TiXmlElement* root)
{
	if(rootElement == NULL)
		return;
	
	//cout << rootElement->Value() << " ";
	vector<string> map;
	multimap<string,string>::iterator mt;
	TiXmlAttribute* attributeOfRoot= rootElement->FirstAttribute();
	for(;attributeOfRoot !=NULL; attributeOfRoot = attributeOfRoot->Next())
	{
		
	//	cout << attributeOfRoot->Name() << ":" << attributeOfRoot->Value() << endl;
		m_map.insert(pair<string,string>(rootElement->Value(),attributeOfRoot->Name()));
		mt = m_map2.insert(pair<string,string>(rootElement->Value(),attributeOfRoot->Value()));
		m_mmap.insert(pair<pair<string,string>,string>(*mt,attributeOfRoot->Value()));
	}
	
	if((rootElement->GetText()) != NULL)
	{
		TiXmlAttribute* attributeOfRoot2= root->FirstAttribute();
		string contactType = rootElement->Value();
		string contactValue = rootElement->GetText();
		m_mmap2.insert(pair<pair<pair<string,string>,string>,string>(*m_mmap.find(make_pair<string,string>(root->Value(),attributeOfRoot2->Value())),rootElement->Value()));
		//cout << contactType  << " : " << contactValue << std::endl;  
	}
	cout << "--------------------\n";
	multimap<string,string>::iterator mp = m_map.begin();
	TON::iterator it = m_mmap2.begin();
	for(;mp!=m_map.end();mp++)
	{
		cout << (*mp).first << " " << (*mp).second << endl;
	}
	cout << "+++++++++++++++++++++\n";
	for(;it!=m_mmap2.end();it++)
	{
		cout << (*it).first.first.first << " " << (*it).first.first.second << " " << (*it).second  << endl;
	}
	
	circle_fun(rootElement->FirstChildElement(),rootElement);

	circle_fun(rootElement->NextSiblingElement(),root);
}
bool ParseXml::parse()
{
	TiXmlDocument doc;
	if(doc.LoadFile(file_name.c_str()))
	{
		doc.Print();
		
	}else
	{
		cout << "can not parse xml conf/school.xml\n";
		return false;
	}
	TiXmlElement* rootElement = doc.RootElement();  //School元素  

	circle_fun(rootElement,rootElement);
	return true;
}


int main(int argc, char** argv) {
	string s("conf/school.xml");
	ParseXml px(s);
	px.parse();
	return 0;
}


