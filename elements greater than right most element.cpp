#include<iostream>
using namespace std;
int main()
{
	int arr[]={3,9,4,6,7,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int m=arr[n-1];
	int count=0;
	for(int i=0;i<n-1;++i)
	{
		if(arr[i]>m)
		{
		++count;
	    }
	}
	cout<<"no of elements greater than a given element is:"<<endl;
	cout<<count<<endl;
	return 0;
}
