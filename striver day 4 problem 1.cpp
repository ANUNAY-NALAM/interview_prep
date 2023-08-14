#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tar;
	cin>>tar;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}
    
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n;++j)
		{
			if(i!=j)
			{
				if(arr[i]+arr[j]==tar)
				{
					cout<<i<<" "<<j;
					return 0;
				}
			}
		}
	}
	return 0;
}
