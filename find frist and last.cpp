#include<iostream>
using namespace std;
int find(int arr[],int size,int tar,int tag)
{
	int ans=-1;
	int f=0;
	int l=size-1;
	while(f<=l)
	{
		int mid=(f+l)/2;
		if(arr[mid]<tar)
		{
			l=mid-1;
		}
		else if(arr[mid]>tar)
		{
			f=mid+1;
		}
		else
		{
			ans=mid;
			if(tag==-1)
			{
				l=mid+tag;
			}
			else
			{
				f=mid+tag;
			}
		}
	}
	return ans;
}
int main()
{
	int tar,size;
	cin>>tar;
	cin>>size;
	int ans1,ans2;
	int arr[size];
	for(int i=0;i<size;++i)
	{
		cin>>arr[i];
	}
	ans1=find(arr,size,tar,-1);
	ans2=find(arr,size,tar,1);
	if(ans1==-1)
	cout<<-1<<":: not found"<<endl;
	cout<<"frist index:"<<ans1<<" "<<"last index:"<<ans2<<endl;
	return 0;
}
