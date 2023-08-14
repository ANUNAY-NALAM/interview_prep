#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	int i;
	string s;
	scanf("%d",&s);
	map<char,int> p;
	for(int i=0;i<s.length();i++)
       {
       	p[s[i]]++;
		   }	
	for(map<char,int> x: p)
	{
		if(x.second>1)
		{
			cout<<x.frist<<" "<<x.second<<endl;	
				}
		}   
	return 0;
}
