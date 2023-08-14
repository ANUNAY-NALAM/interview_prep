#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int k=INT_MIN;
	int count =0;
	int flag=1;
	for(int i=0;i<n;++i)
	{
		if(arr[i]!=k)
		{
			if(count>n/2&&i!=0)
			{
				cout<<"majority element is"<<arr[i-1]<<endl;
				break;
				flag=0;
			}
			else
			{
				count=0;
				k=arr[i];
				++count;
			}
		}
		else
		{
			++count;
		}
	}
	      if(count>n/2&&flag)
			{
				cout<<"majority element is"<<k<<endl;
			
				flag=0;
			}
	return 0;
}
