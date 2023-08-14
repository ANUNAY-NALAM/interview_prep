#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int n,int dup[])
{
	int kcr;
	int k;
	int ktr;
	for(int i=1;i<n;++i)
	{
		kcr=arr[i];
		ktr=dup[i];
		k=i;
		while(arr[i-1]>kcr&&k>=1)
		{
			arr[k]=arr[k-1];
			dup[k]=dup[k-1];
			k--;
		}
		arr[k]=kcr;
		dup[k]=ktr;
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int dup[n];
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
		dup[i]=i;
	}
	insertionSort(arr,n,dup);
	for(int i=0;i<n;++i)
	{
		cout<<arr[i];
	}
	cout<<endl;
	for(int i=0;i<n;++i)
	{
		cout<<dup[i];
	}
	cout<<endl;
	
	return 0;
}

