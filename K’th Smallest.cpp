//not anything special but it reminds never forget ground level
#include<bits/stdc++.h>
using namespace std;
int findNo(int arr[],int n,int p)
{
	sort(arr,arr+n);
	return arr[p-1];
	
}
int main()
{
	int arr[]={7,10,4,3,20,15};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"enter which smallest number eighter 1st or 2nd link that"<<endl;
	int p;
	cin>>p;
	int k=findNo(arr,n,p);
	cout<<k;
	return 0;
}

