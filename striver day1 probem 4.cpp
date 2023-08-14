#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int arr2[n];
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
		arr2[i]=arr[i];
	}
	for(int i=1;i<n;++i)
	{
		arr[i]=arr[i]+arr[i-1];
	}
	int max=INT_MIN;
	int max_index=-1;
	int min=INT_MAX;
	int min_index=-1;
	for(int i=0;i<n;++i)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			max_index=i;
		}
		
	}
	
	for(int i=0;i<max_index;++i)
	{
		if(arr[i]<min)
		{
			min=arr[i];
			min_index=i;
		}
	}
	int sum=0;
	for(int i=min_index+1;i<=max_index;++i)
	{
		sum=sum+arr2[i];
	}
	cout<<"max_index++"<<max_index<<endl;
	cout<<"max_index++"<<min_index<<endl;
	cout<<sum<<endl;
	return 0;
	
}
