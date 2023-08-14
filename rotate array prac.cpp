#include<iostream>
using namespace std;

void reverse(int arr[],int start,int end)
{
	while(start<end)
	{
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}

void rotate(int arr[],int s,int n)
{
	reverse(arr,0,s-1);
	reverse(arr,0,n);
	reverse(arr,n,s-1);
}

int main()
{
	int arr[]={1,2,3,4,5,6,7};
	int n=2;
	int s=sizeof(arr)/sizeof(arr[0]);
	rotate(arr,s,n);
	for(int i=0;i<s;++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
