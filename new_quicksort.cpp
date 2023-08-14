#include<bits/stdc++.h>
using namespace std;

int quick(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;++j)
    {
        if(arr[j]<pivot)
        {
          i++;
          swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);
}
void quicksort(int arr[],int low,int high)
{
    if(low>=high)
    return;
	int i=quick(arr,low,high);
	quicksort(arr,low,i-1);
	quicksort(arr,i+1,high);
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
   quicksort(arr,0,n-1);
   for(int i=0;i<n;++i)
   {
   	cout<<arr[i]<<" ";
   }
   cout<<endl;
   return 0;
}

