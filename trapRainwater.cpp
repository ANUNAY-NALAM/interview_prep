#include<bits/stdc++.h>
using namespace std;

int trap(int arr[],int s)
{
	int left[s],right[s];
	int res=0;
	int lmax= arr[0];
	int rmax=arr[s-1];
	for(int i=0;i<s-1;++i)
	{
		if(arr[i]>=lmax)
		lmax=arr[i];
		
		left[i]=lmax;
	}
	for(int i=s-1;i>=0;--i)
	{
		if(arr[i]>=rmax)
		rmax=arr[i];
		
		right[i]=rmax;
	}
	for(int i=1;i<s-1;++i)
	{
		res=res+(min(left[i],right[i])-arr[i]);
	}
	return res;
}

int main()
{
	int arr[]= {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
	int s= sizeof(arr)/sizeof(arr[0]);
	
	int w=trap(arr,s);
	cout<<w<<": is total rainwater traped"<<endl;
	return 0;
}