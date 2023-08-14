//a1)taking a building fiding lagerst building in left and right then subtracting cur building to min of lar
//left and right building and adding all those(o(n^2))
//a2)traverse array from left to right and create new array of left max and in same way create new array of
//right max then traverse again take min(left,right) subtract from cur num add all those(tc->o(n) sc->o(n))
#include<bits/stdc++.h>
using namespace std;

int trap(int arr[],int s)
{
	int left,right;
	int res=0;
	for(int i=1;i<s-1;++i)
	{
		left=arr[i];
		right=arr[i];
		for(int j=0;j<i;++j)
		{
			left=max(left,arr[j]);
		}
		for(int k=i+1;k<s;++k)
		{
			right=max(right,arr[k]);
		}
		res =res+(min(left,right)-arr[i]);
		
	}
	return res;
}

int main()
{
	int arr[]= {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
	int s= sizeof(arr)/sizeof(arr[0]);
	
	int w=trap(arr,s);
	cout<<w<<": is total rainwater traped"<<endl;
	return 0;
}
