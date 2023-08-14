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
	for(int i=0;i<n;++i)
	{
		if(arr[i]!=k)
		{
			if(count>n/3&&i!=0)
			{
				cout<<"majority element is"<<arr[i-1]<<endl;
				count=0;
				k=arr[i];
				++count;
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
	      if(count>n/3)
			{
				cout<<"majority element is"<<k<<endl;
			
				
			}
	return 0;
}
