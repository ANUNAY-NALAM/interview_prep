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
	 int shota=0,shotb=0,chana=n,chanb=n;
	for(int i=0;i<2*n;++i)
	{
		if(i%2==0)
		{
		   if(s[i]=='1')
		   {
			shota++; 
		   }
			chana--;
			
		}
		else if(i%2!=0)
		{
		   if(s[i]=='1')
		   {
			shotb++;
		   }
			chanb--;
		}
		if(shota>chanb+shotb)
		{
			cout<<i+1<<endl;
			break;
		}
		else if(shotb>chanb+shotb)
		{
			cout<<i+1<<endl;
			break;
		}
		else if(shota==shotb&&i==(2*n-1))
		{
			cout<<i+1<<endl;
			break;
		}
	}
	
    }
    return 0;
	
	
}
