//1 3 5 2 4 7 7 
//1 2 3 4 5 7 7 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1,3,5,2,4,7,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	int max=INT_MIN;
	for(int i=0;i<n;++i)
	{
		int sum=0;
		for(int j=0;j<n;++j)
		{
			sum=arr[i]+arr[j];
			if(__gcd(arr[i],arr[j])&&sum>max)
			    max=sum;
		}
	}
	cout<<max;
	return 0;
}














