#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int low,int mid,int high )
{
	int s1=(mid-low+1);
	int s2=(high-mid);
	int a1[s1],a2[s2];
	int p1=0;
	int p2=0;
	int k=low;
	for(int i=0;i<s1;i++)
	{
		a1[i]=arr[low+i];
	}
	for(int i=0;i<s2;i++)
	{
		a2[i]=arr[mid+i+1];
	}
	while(p1<s1&&p2<s2)
	{
		if(a1[p1]<a2[p2])
		{
			arr[k]=a1[p1];
			++p1;
		}
		else 
		{
			arr[k]=a2[p2];
			++p2;
		}
		++k;
	}
	while(p1<s1)
	{
		arr[k]=a1[p1];
		++p1;
		++k;
	}
	while(p2<s2)
	{
		arr[k]=a2[p2];
		++p2;
		++k;
	}
}

int mergeSort(int arr[],int low,int high)
{
	if((high-low)==0)
	{
		return arr[low];
	}

		int mid=low+(high-low)/2;
		mergeSort(arr,low,mid);
		mergeSort(arr,mid+1,high);
		merge(arr,low,mid,high);
	
}


int main()
{
	int arr[]={4,7,3,8,1,2,9,6,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	mergeSort(arr,0,n-1);
	for(int i;i<n;++i)
	{
		cout<<arr[i];
	}
	return 0;
}

