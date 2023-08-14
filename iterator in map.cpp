#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main()
{
	unordered_map<string,int> ourmap;
	ourmap["abc1"]=1;
	ourmap["abc2"]=2;
	ourmap["abc3"]=3;
	ourmap["abc4"]=4;
	ourmap["abc5"]=5;
	ourmap["abc6"]=6;
	unordered_map<string,int>::iterator it=ourmap.begin();
	while(it != ourmap.end())
	{
		cout<<"key:"<<it->first<<"value:"<<it->second<<endl;
		++it;
	}
	unordered_map<string,int>::iterator it1=ourmap.find("abc1");
	ourmap.erase(it1,it1 + 3);
	
	
	
}
