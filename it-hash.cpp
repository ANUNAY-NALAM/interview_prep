#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main()
{
    unordered_map<string,int> ourmap;
	ourmap["abc1"]=1;
	ourmap["abc2"]=2;
	ourmap["abc3"]=3;
	ourmap["abc4"]=4;
	ourmap["abc5"]=4;
	ourmap["abc6"]=6;	
	
	unordered_map<string,int>::iterator it= ourmap.begin();
	while(it!=ourmap.end())
	{
		cout<<"key :"<<it->first<<"value:"<<it->second<<endl;
		it++;
	}
	//find

	
	
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	vector<int>:: iterator it1=v.begin();
	while(it1 !=v.end())
	{
		cout<<*it1<<endl;
		it1++;
	}
	return 0;
}
