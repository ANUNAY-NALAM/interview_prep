#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;++i)
	{
		arr[i][0]=1;
	}
	for(int j=0;j<m;++j)
	{
		arr[0][j]=1;
	}
	for(int i=1;i<n;++i)
	{
		for(int j=1;j<m;++j)
		{
			arr[i][j]=arr[i-1][j]+arr[i][j-1];
		}
	}
	cout<<arr[n-1][m-1];
	return 0;
}
