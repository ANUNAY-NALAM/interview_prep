#include<bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int arr[n+1];
		int m=-1;
		for(int i=1;i<=n;++i)
		{
			cin>>arr[i];
			if(arr[i]>m)
			{
				m= arr[i];
			}
		}
		vector<int> s;
		int count=0;
		for(int i=1;i<=n;++i)
		{
			if(arr[i]!=m)
			{
				count++;
			}
			else
			{
				s.emplace_back(count);
				count =0;
			}
		
		}
		if(count!=0)
		{
			s[0]=(count + s[0]);
		}
		int result=0;
		for(int i=0;i<s.size();i++)
		{
			result +=max(s[i]-(n/2)+1,0);
		}
		cout<<result<<"\n";
		
	}
	return 0;
}
