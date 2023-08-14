#include<bits/stdc++.h>
using namespace std;
/*
                best   average    worst
bubble sort     o(n)-- o(n2) ---- o(n2)  space-->o(1)
selection sort  o(n)-- o(n2)----o(n2)   space-->o(1)
insertion sort  o(n)--o(n2)----o(n2)    space-->o(1)
quick sort   o(nlog(n))-o(nlog(n)) ----o(n2) space-->o(n)
merge sort   o(nlog(n))--o(nlog(n))--o(nlog(n)) space(o(n))
heap sort    o(nlog(n))--o(nlog(n))-o(nlog(n))  spaceo(1)

*/
void bubbleSort(int arr[],int n)
{
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n-1;++j)
		{
			if(arr[j]>arr[j+1])
			swap(arr[j],arr[j+1]);
		}
	}
}
void selectionSort(int arr[],int n)
{
	for(int i=0;i<n;++i)
	{
		for(int j=i+1;j<n;++j)
		{
			if(arr[j]<arr[i])
			{
				swap(arr[j],arr[i]);
			}
		}
	}
}
void insertionSort(int arr[],int n)
{
	int harshita,j;
	for(int i=1;i<n;i++)
	{
		harshita=arr[i];
		j=i;
		while(arr[j-1]>harshita&&j>=1)
		{
			arr[j]=arr[j-1];
			j--;
		}
		arr[j]=harshita;
	}
}
void mergeSort(int arr[],int start,int mid,int end)
{
	int n1=mid-start+1;
	int n2=end-mid;
	int left[n1];
	int right[n2];
	for(int i=0;i<n1;++i)
	{
		left[i]=arr[start+i];
	}
	for(int i=0;i<n2;++i)
	{
		right[i]=arr[mid+1+i];
	}
	int p1=0,p2=0;
	int k=start;
	while(p1<n1&&p2<n2)
	{
		if(left[p1]<=right[p2])
		{
			arr[k]=left[p1];
			++p1;
		}
		else
		{
			arr[k]=right[p2];
			++p2;
		}
		++k;
	}
	while(p1<n1)
	{
		arr[k]=left[p1];
		++p1;
		++k;
	}
	while(p2<n2)
	{
		arr[k]=right[p2];
		++p2;
		++k;
	}
}
void merge(int arr[],int start,int end)
{
	if(start>=end)
	return;
	
		int mid=start+(end-start)/2;
		merge(arr,start,mid);
		merge(arr,mid+1,end);
		mergeSort(arr,start,mid,end);
	
}
int partition(int arr[],int low,int high)
{
	int pivot=arr[high];
	int i=low-1,temp;
	for(int j=low;j<=high-1;++j)
	{
		if(arr[j]<=pivot)
		{
			++i;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
		
	}
	temp=arr[i+1];
		arr[i+1]=arr[high];
		arr[high]=temp;
		return i+1;
}
void quickSort(int arr[],int low,int high)
{
	if(low>=high)
	return;
	int pivot=partition(arr,low,high);
	quickSort(arr,low,pivot-1);
	quickSort(arr,pivot+1,high);
}

int main()
{
	int arr[8]={1,7,6,8,0,9,4,5};
	int n=8;
	bubbleSort(arr,n);
	for(int i=0;i<n;++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int arr2[8]={1,7,6,8,0,9,4,5};
	n=8;
	selectionSort(arr2,n);
	for(int i=0;i<n;++i)
	{
		cout<<arr2[i]<<" ";
	}
	cout<<endl;
	int arr3[8]={1,7,6,8,0,9,4,5};
	n=8;
	insertionSort(arr3,n);
	for(int i=0;i<n;++i)
	{
		cout<<arr3[i]<<" ";
	}
	cout<<endl;
	int arr4[8]={1,7,6,8,0,9,4,5};
	n=8;
	int start=0;
	int end=n-1;
	merge(arr4,start,end);
	for(int i=0;i<n;++i)
	{
		cout<<arr4[i]<<" ";
	}
	cout<<endl;
	int arr5[8]={1,7,6,8,0,9,4,5};
	n=8;
	quickSort(arr5,0,7);
	for(int i=0;i<n;++i)
	{
		cout<<arr5[i]<<" ";
	}
	cout<<endl;
	

}
