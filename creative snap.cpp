//One thing is remaining, the value of x, given l and r. Sort the array containing indices of avengers 
//and then find positions of l and r in that array using binary search. Difference is positions of l and r in array will give x.
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int x,int arr[],int n)
{
	
	
	int left=0;
	int right=n-1;
	if(x<arr[left])
	{
		return -1;
	}
	else
	{
	while(left<=right)
	{
		int mid=left+(right-left)/2;
		if(arr[mid]==x)
		{
			return mid;
		}
		if((arr[left]<x&&arr[right]<x))
		{
			return right;
		}
		else if(arr[left]>x&&arr[right]>x)
		{
			return left-1;
		}
		else if(x<arr[mid])
		{
			right=mid-1;
		}
		else
		{
			left=mid+1;
		}
	}
}
}
int recur(int f,int e,int a,int b,int arr[],int k)
{
	int result;
	int len=e-f;
	int mid=f+(e-f)/2;
	int x1=binarySearch(f-1,arr,k)+1;
	int x2=binarySearch(e-1,arr,k)+1;
	int x=x2-x1;
	if(len>=2)
	{
		result=min((x*b*len),(recur(f,mid,a,b,arr,k))+(recur(mid,e,a,b,arr,k)));
	}
	else
	result=x*len*b;
	
	return result;
}
int main()
{
	int n,k,a,b;
	cin>>n>>k>>a>>b;
	int arr[k];
	for(int i=0;i<k;++i)
	{
		cin>>arr[i];
	}
	int l=pow(2,n);
	int p=recur(0,l,a,b,arr,k);
	cout<<p<<endl;
	return 0;
}
