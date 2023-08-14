#include<iostream>
#include<unordered_map>
using namespace std;
int  zerosum(int arr[],int len)
{
	int s=0;
	int c=0;
	unordered_map<int,int>m;
	for(int i=0;i<len;++i)
	{
		s=s+arr[i];
		if(s==0||arr[i]==0||m[s]==1)
		{
			++c;
		}
		else
		{
			m[s]=1;
		}
	}
	return c;
}
int main()
{
	int arr[]={6,-1,-3,4,-2,2,4,6,-12,-7};
	int k=zerosum(arr,arr.size());
	cout<<"no of sub arrays:"<<k;
	return 0;
}

