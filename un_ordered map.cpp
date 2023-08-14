#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main()
{
	unordered_map <string,int> ourmap;
	//insert
	pair<string,int> p("abc",1);
	ourmap.insert(p);
	ourmap["def"]=2;
	cout<<ourmap["abc"]<<endl;
	cout<< ourmap.at("abc")<<endl;
	cout<<ourmap["erf"]<<endl;
	cout<<ourmap.at("erf")<<endl;
	ourmap.erase("erf");
	//to check if a key is present or not
	cout<<ourmap.size()<<"->size"<<endl;
	if(ourmap.count("ghi")>0)
	cout<<"it is present"<<endl;
	
	else
	{
		cout<<"not present "<<endl;
	}
	
	
}
