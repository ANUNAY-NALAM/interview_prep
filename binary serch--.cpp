#include<iostream>
using namespace std;

int itBinary(int n,int x,int arr[])
{
	int i=0;
	int j=n-1;
	while(i<j)
	{
		int mid=i+(j-i)/2;
		if(arr[mid]>x)
		{
			j=mid-1;
		}
		else if(arr[mid]<x)
		{
			i=mid+1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
	
}
int recBinary(int x,int arr[],int start,int end)
{
	if(start>end)
	return -1;
	int mid=start+(end-start)/2;
	if(start<end)
	{
		int mid= (start+end)/2;
		if(arr[mid]==x)
		  return 1;
		else if(arr[mid]>x)
		{
			return recBinary(x,arr,start,mid-1);
		} 
		else if(arr[mid]<x)
		 {
		 	return recBinary(x,arr,mid+1,end);
		 }
		 
	}
}
int main()
{
	int n,x;
	cin>>n>>x;
	int arr[n];
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	if(itBinary(n,x,arr))
	{
		cout<<"found by binary search"<<endl;
	}
	else
	{
		cout<<"Not-found by binary search"<<endl;
	}
	int start=0;
	int end=n-1;
	if(recBinary(x,arr,start,end))
	{
		cout<<"found by recursive search"<<endl;
	}
	else
	{
		cout<<"Not-found by recursive search"<<endl;
	}
	return 0;
}
