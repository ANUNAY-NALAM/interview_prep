#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n][2];
	for(int i=0;i<n;++i)
	{
		cin>>arr[i][0];
		cin>>arr[i][1];
	}
	for(int i=0;i<n;++i)
	{
		cout<<arr[i][0]<<" ";
		cout<<arr[i][1];
		cout<<endl;
	}
	int k;
	for(int i=0;i<n-1;++i)
	{
		if(arr[i][1]>arr[i+1][0])
		{
			++k;
			arr[i+1][0]=arr[i][0];
			arr[i][0]=-1;
			arr[i][1]=-1;
		}
	}
	int arr2[n-k][2];
	int p=0;
	for(int i=0;i<n;++i)
	{
		if(arr[i][0]==-1)
		continue;
		arr2[p][0]=arr[i][0];
		arr2[p][1]=arr[i][1];
		++p;
	}
	for(int i=0;i<(n-k-1);++i)
	{
		cout<<arr2[i][0]<<" "<<arr2[i][1]<<endl;
	}
	return 0;
}
