//finding missing and repeating number through 1 algo
#include<iostream>
using namespace std;

void letsDo(int arr[],int n)
{
	//repeating element
	for(int i=0;i<n;++i)
	{
		if(arr[abs(arr[i])-1]>0)
		{
			arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
		}
		else
		{
			cout<<"repeating element is:"<<abs(arr[i])<<endl;
		}
	}
	//missing element
	for(int i=0;i<n;++i)
	 if(arr[i]>0)
	     cout<<"missing element is :"<<i+1<<endl;
}

int main()
{
	int arr[]={7,3,4,5,5,6,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	letsDo(arr,n);
	return 0;
}
