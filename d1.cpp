#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int avg=0;
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
		avg=avg+arr[i];
	}
	avg=avg/n;
	int count=0;
	for(int i=0;i<n;++i)
	{
		if(arr[i]==avg)
		++count;
	}
	cout<<count<<endl;
	return 0;
}
