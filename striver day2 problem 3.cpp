#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr1[n];
	int arr2[m];
	for(int i=0;i<n;++i)
	{
		cin>>arr1[i];
	}
	for(int i=0;i<m;++i)
	{
		cin>>arr2[i];
	}
	int i=0;
	int j=0;
	while(i!=n)
	{
		if(arr1[i]<=arr2[j])
		++i;
		else
		{
			swap(arr1[i],arr2[j]);
			sort(arr2,arr2+m);
			++i;
		}
	}
	for(int i=0;i<n;++i)
	{
		cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int j=0;j<m;++j)
    {
    	cout<<arr2[j]<<" ";
	}
	cout<<endl;
	return 0;
}
