#include<iostream>
using namespace std;
int partion(int arr[],int low,int high)
{
	int temp;
	int pivot=arr[low];
	int i=low+1;
	int j=high;
	while(i<j)
	{
	while(arr[i]<=pivot)
	{
		++i;
	}
	while(arr[j]>pivot)
	{
		--j;
	}
	if(i<j)
	{
	temp=arr[j];
	arr[j]=arr[i];
	arr[i]=temp;
    }
    
    }
    temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;
}
void quicksort(int arr[],int low,int high)
{
	if(low<high)
	{
	int i=partion(arr,low,high);
	quicksort(arr,low,i-1);
	quicksort(arr,i+1,high);
    }
}
int main()
{
	int arr[8]={4,3,7,5,6,1,8,2};
	quicksort(arr,0,7);
	for(int i=0;i<8;++i)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
