#include<iostream>
#include<string>
using namespace std;
void findsome(string s,string s1)
{
	int pos=s.find(s1);
	if(pos!=string::npos)
	{
	cout<<s1<<"is found at"<<pos<<endl;
	}
	else
	{
		cout<<"not found"<<endl;
	}	
}
int main()
{
	string s="lets do some coding";
	string s1="do";
	findsome(s,s1);
}

