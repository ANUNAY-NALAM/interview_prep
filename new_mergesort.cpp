#include<bits/stdc++.h>
using namespace std;


void mergesort(int arr[],int low,int mid,int high)
{
	int dummy[high+1];
	int low1=low;
	int high1=mid;
	int low2=mid+1;
	int high2=high;
	int ptr1=low1;
	int ptr2=low2;
	int i=0;
	while(ptr1<=high1&&ptr2<=high2)
	{
		if(arr[ptr1]>arr[ptr2])
		{
			dummy[i]=arr[ptr2];
			ptr2++;
		}
		else if(arr[ptr1]<arr[ptr2])
		{
			dummy[i]=arr[ptr1];
			ptr1++;
		}
		++i;
		
	}
	while(ptr1<=high1)
	{
		dummy[i]=arr[ptr1];
		ptr1++;
		i++;
	}
	while(ptr2<=high2)
	{
		dummy[i]=arr[ptr2];
		ptr2++;
		i++;
	}
	i=0;
	for(int j=low;j<=high;++j)
	{
		arr[j]=dummy[i];
		++i;
	}
}
void merge(int arr[],int low,int high)
{
	if(low>=high)
	return;
	int mid=(low+high)/2;
	merge(arr,0,mid);
	merge(arr,mid+1,high);
	mergesort(arr,low,mid,high);
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	merge(arr,0,n-1);
	for(int i=0;i<n;++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
