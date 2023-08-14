//quick sort
#include<iostream>
using namespace std;
int partition(int arr[],int low,int high)
{
	
	int pivot=arr[high];
	int index=low;
	for(int i=low;i<high;++i)
	{
		if(arr[i]<pivot)
		{
		    int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
			++index;
		}
		
	}
	        int temp = arr[high];
            arr[high] = arr[index];
            arr[index] = temp;
	
	return index;
}
void quickSort(int arr[],int low,int high)
{
	if(low<high)
	{
	int p=partition(arr,low,high);
	quickSort(arr,low,p-1);
	quickSort(arr,p+1,high);
    }
}


int main()
{
	int arr[]={4,7,3,8,1,2,9,6,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	quickSort(arr,0,n-1);
	for(int i=0;i<n;++i)
	{
		cout<<arr[i];
	}
	return 0;
}
