#include<bits/stdc++.h>
#include<string.h>
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
		char arr[10];
		for(int i=0;i<10;++i)
		{
			arr[i]=s[i];
		}
		
		s.clear();
		for(int j=1;j<n;++j)
		{			
			cin>>s;
			
			for(int i=0;i<10;++i)
			{
				
			  if(s[i]=='1'&&arr[i]=='1')
			   {
				arr[i]='0';
			   }
			  else if(s[i]=='1'&&arr[i]=='0')
			  {
				arr[i]='1';
			  }
			  
		    }
		    s.clear();
		}
		int sum=0;
		
		int a[10];
		for(int i=0;i<10;++i)
		{
			if(arr[i]=='0')
			  a[i]=0;
			else
			  a[i]=1;  
			sum=sum+a[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}
