#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		char c='I';
		int x=0,y=0;
		for(int i=0;i<n;++i)
		{
			if(c!='H'&& s[i]=='L')
			{
				x-=1;
				c='H';
			}
			if(c!='H'&&s[i]=='R')
			{
				x+=1;
				
				c='H';
			}
			if(c!='V'&&s[i]=='U')
			{
				y+=1;
				c='V';
			}
			if(c!='V'&&s[i]=='D')
			{
				y-=1;
				c='V';
			}
		}
		cout<<x<<" "<<y<<endl;
	}
	return 0;
}
