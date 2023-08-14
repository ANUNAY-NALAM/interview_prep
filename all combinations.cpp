#include<bits/stdc++.h>
using namespace std;
void count(int data[],int start,int n,int index,int k);
void get_all(int n,int k)
{
	int data[k];
	count(data,0,n-1,0,k);
}
void count(int data[],int start,int n,int index,int k)
{
	if(index==k)
	{
		for(int i=0;i<n;++i)
		{
			cout<<data[i]<<" ";
		}
		cout<<endl;
	}
	for(int i=start;i<=n && n-i+1>=k-index;++i)
	{
		data[index]=i+1;
		count(data,i+1,n,index+1,k);
	}
	
}

int main()
{
	int n;
	cin>>n;
	int k;
	cin>>k;
	get_all(n,k);
	return 0;
}
