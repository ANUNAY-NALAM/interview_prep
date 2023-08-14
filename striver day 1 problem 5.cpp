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
	int i=0;
	int j=n-1;
	while(i<j)
	{
		if(arr[i]!=0&&arr[j]!=0)
		{
			--j;
		}
		else if(arr[i]==0&&arr[j]!=0)
		{
			++i;
			--j;
		}
		else if(arr[i]!=0&&arr[j]==0)
		{
			swap(arr[i],arr[j]);
			++i;
			--j;
		}
		else if(arr[i]==0&&arr[j]==0)
		{
			++i;
		}
	}
	j=n-1;
	while(i<j)
	{
		if(arr[i]!=1&&arr[j]!=1)
		{
			--j;
		}
		else if(arr[i]==1&&arr[j]!=1)
		{
			++i;
			--j;
		}
		else if(arr[i]!=1&&arr[j]==1)
		{
			swap(arr[i],arr[j]);
			++i;
			--j;
		}
		else if(arr[i]==1&&arr[j]==1)
		{
			++i;
		}
	}
//    cout<<i<<" "<<j;
    for(int i=0;i<n;++i)
    {
    	cout<<arr[i]<<endl;
	}
    return 0;
}
