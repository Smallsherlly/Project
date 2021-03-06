#include <parsexml.h>

void ParseXml::show()
{
	cout << "--------------------\n";
	multimap<string,string>::iterator mp = m_map.begin();
	for(;mp!=m_map.end();mp++)
	{
		cout << (*mp).first << " " << (*mp).second << endl;
	}
	cout << "+++++++++++++++++++++\n";
}

string ParseXml::getValue(string name)
{
	return m_map[name];
}//key value
void ParseXml::setValue(string name,string value)
{
	m_map[name] = value;
}

//遍历递归
void ParseXml::circle_fun(TiXmlElement* rootElement)
{
	if(rootElement == NULL)
		return;
	

	vector<string> map;

	if(rootElement->FirstChildElement() == NULL)
	{
		string contactType = rootElement->Value();
		string contactValue = rootElement->GetText();
		m_map.insert(PAIR(rootElement->Value(),rootElement->GetText()));
	}
	
	circle_fun(rootElement->FirstChildElement());

	circle_fun(rootElement->NextSiblingElement());
}
bool ParseXml::parse()
{
	TiXmlDocument doc;
	if(doc.LoadFile(file_name.c_str()))
	{
		//doc.Print();
		
	}else
	{
		cout << "can not parse xml conf/school.xml\n";
		return false;
	}
	TiXmlElement* rootElement = doc.RootElement();  //School元素  

	circle_fun(rootElement);
	//show();
	return true;
}

