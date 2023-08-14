#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		int n= str.length();
		int count=0;
		for(int i=0;i<n;++i)
		{
			if((str[i]=='x'&&str[i+1]=='y')||(str[i]=='y'&&str[i+1]=='x'))
			{
				++count;
				++i;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
