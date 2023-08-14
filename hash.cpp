#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main()
{
	unordered_map<string,int> ourmap;
	//insert 
	pair<string,int> p("abc",1);
	ourmap.insert(p);
	ourmap["def"]=2;
	//find or access
	cout<<ourmap["abc"]<<endl;
	cout<<ourmap.at("abc")<<endl;
	cout<<ourmap.at("def")<<endl;
	cout<<ourmap.size()<<endl;
	cout<<ourmap["ghi"]<<endl;//insert this and sends default value 0
	cout<<ourmap.size()<<endl;
	cout<<ourmap.erase("ghi")<<endl;
	//check presence
	if(ourmap.count("ghi")>0)
	{
		cout<<"ghi is present"<<endl;
	}
	
	
}
