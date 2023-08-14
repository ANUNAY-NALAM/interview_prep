#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int sum=0;
	for(int i=0;i<n;++i)
	{
	   	cin>>arr[i];
	   	sum+=arr[i];
	}
	int left=0;
	int right=sum;
	int count=0;
	for(int i=0;i<n-1;++i)
	{
		left+=arr[i];
		right-=arr[i];
		if(left==right)
		{
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
