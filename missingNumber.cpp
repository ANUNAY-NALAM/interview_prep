//find missing number in the range of 1 to n
#include<bits/stdc++.h>
using namespace std;
void missing(int arr[],int n)
{
	int total=((n+1)*(n+2))/2;
	int sum=0;
	for(int i=0;i<n;++i)
	{
		sum=sum+arr[i];
	}
	cout<<(total-sum);
}
int main()
{
	int arr[]={1,2,3,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	missing(arr,n);
	
}
