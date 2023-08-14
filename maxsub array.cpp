#include<iostream>
using namespace std;

int bruteForce(int arr[],int n)
{
	int maxsum=INT_MIN;
	int temp=0;
	for(int i=0;i<n;++i)
	{
		if(temp<0)
		temp=0;
		if(temp>maxsum)
		{
			maxsum=temp;
		}
		temp=temp+arr[i];
	}
	return maxsum;
}
int optimised (int arr[],int left,int right)
{
	if(left== right)
	 return arr[left];
	 int sum=0;
	 int left_sum=INT_MIN;
	 int mid=left+(right-left)/2;
	for(int i=mid;i>left-1;--i)
	{
		sum+=arr[i];
		if(sum>left_sum)
		{
			left_sum=sum;
		}
	}
	sum=0;
	int right_sum=INT_MIN;
	for(int i=mid+1;i<=right;++i)
	{
		sum+=arr[i];
		if(sum>right_sum)
		{
			right_sum=sum;
		}
	}
	int left_array=optimised(arr,left,mid);
	int right_array=optimised(arr,mid+1,right);
	return max((left_sum+right_sum),max(left_array,right_array));
	
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
	int k=bruteForce(arr,n);
	cout<<k<<endl;
	int p=optimised(arr,0,n-1);
	cout<<p<<endl;
	
	return 0;
}
