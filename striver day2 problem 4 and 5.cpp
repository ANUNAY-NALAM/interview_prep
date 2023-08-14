#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=1;i<=n;++i)
	{
		cin>>arr[i];
	}
	int dup[n+1];
	memset(dup,-1,sizeof(dup));
	for(int i=1;i<=n;++i)
	{
		if(dup[arr[i]]!=-2)
		dup[arr[i]]=-2;
		else
		dup[arr[i]]=-4;
	}
	int k=0;
	int j=0;
	for(int i=1;i<=n;++i)
	{
		if(dup[i]==-1)
		k=i;
		else if(dup[i]==-4)
		j=i;
	}
	cout<<"missing==>"<<k<<endl;
	cout<<"repeating==>"<<j<<endl;
	return 0;

}
