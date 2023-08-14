#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n-1;++i)
	{
		arr[i]=arr[i+1]-arr[i];
	}
//	for(int i=0;i<n-1;++i)
//	{
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
	int cum_max=0;
	int max=0;
	for(int i=0;i<n-1;++i)
	{
		max=arr[i]+max;
		if(max<0)
		{
			max=0;
		}
		if(max>cum_max)
		{
			cum_max=max;
		}
	}
	cout<<cum_max<<endl;
	return 0;
}
