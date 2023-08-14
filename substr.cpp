#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str="cat.dog";
	int pos=str.find(".");
	string sub=str.substr(pos);
	cout<<pos<<endl;
	cout<<sub<<endl;
	return 0;
} 
