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
		int arr[26];
		for(int i=0;i<26;++i)
		{
			arr[i]=INT_MIN;
		}
		int min=INT_MAX;
		for(int i=0;i<n;++i)
		{
			
			if(arr[s[i]-'a']==INT_MIN)
			{
			  arr[s[i]-'a']=i;
			
		    }
		    else
		    {
		    	
		    	if(min>(i-arr[s[i]-'a']))
		    	    min=i-arr[s[i]-'a']; 
					
			     arr[s[i]-'a']=i;		  
			}
		}
		if(min==INT_MAX)
		{
			cout<<0<<endl;
		}
		else
		{
			min=min-1;
		cout<<n-min-1<<endl;
	    }
		
	}
	return 0;
}
