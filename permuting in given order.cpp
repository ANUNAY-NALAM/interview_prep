//permuting in given order
#include<bits/stdc++.h>
using namespace std;

void permutation(int a[],int p[],int n)
{
	for(int i=0;i<n;++i)
	{
		int next=i;
		while(p[next]<=0)
		{
			swap(a[i],a[p[next]]);
		
		int temp=p[next];
		p[next]=p[next]-n;
		next=temp;
	}
	}
	
}

int main()
{
	int a[]={5,6,7,8};
	int p[]={3,2,1,0};
	int n=sizeof(a)/sizeof(a[0]);
	permutation(a,p,n);
	cout<<"after permuting:"<<endl;
	for(int i=0;i<n;++i)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
