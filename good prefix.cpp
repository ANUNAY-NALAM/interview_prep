#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int arr[26];
		for(int i=0;i<26;++i)
		{
			arr[i]=0;
		}
		string str;
		cin>>str;
		int k,x;
		cin>>k>>x;
		int n=str.length();
		int count=0;
		for(int i=0;i<n;++i)
		{
			if(arr[str[i]-'a']<x)
			{
			  ++arr[str[i]-'a'];
			  ++count;
		    }
			else if(k>0)
			{
				--k;
			}
			else
			{
				break;
			}
		}
		cout<<count<<endl;
	
	}
	return 0;
}
