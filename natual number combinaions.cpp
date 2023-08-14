#include<bits/stdc++.h>
using namespace std;

void find_all(int arr[],int n,int len,int k)
{
	if(len==k)
	{
		for(int i=0;i<k;++i)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
		return;
	}
	int i;
	if(len==0)
	{
		i=1;
	}
	else
	{
		i=arr[len-1]+1;
	}
	len++;
	while(i<n)
	{
		arr[len-1]=i;
		find_all(arr,n,len,k);
		i++;
	}
	len--;
}
int main()
{
	int n;
	cin>>n;
	int k;
	cin>>k;
	int arr[k];
	find_all(arr,n,0,k);
	return 0;
}
