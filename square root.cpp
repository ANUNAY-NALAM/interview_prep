#include<iostream>
using namespace std;
int bruteForce(int n)
{
	for(int i=0;i<n;++i)
	{
		if(i*i>n)
		{
			return(i-1);
		}
	}
	return 0;
}
int optimised(int n,int start,int end)
{
	int mid=(start+end)/2;
	if(mid==start||mid==n)
	{
		return mid;
	}
	if(mid*mid>n)
	{
		return optimised(n,start,mid);
	}
	else
	{
		return optimised(n,mid,end);
	}
}
int main()
{
	int n;
	cin>>n;
	int k=bruteForce(n);
	cout<<k<<endl;
	int p=optimised(n,0,n);
	cout<<p<<endl;
	return 0;
}
