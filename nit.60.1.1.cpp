//BINARY SERCH OF THE SORTED ARRAY USING DIVIDE AND COquer
#include<iostream>
using namespace std;
int binarySerch(int a[],int ele,int f,int l);
int main()
{
	int i,n,ele,r;
	cout<<"enter size"<<endl;
	cin>>n;
	int a[n];
	cout<<"enter the sorted array elements"<<endl;
	for(i=0;i<n;++i)
	{
		cin>>a[i];
	}
	cout<<"enter the element you are serching for"<<endl;
	cin>>ele;
	r=binarySerch(a,ele,0,n-1);
	cout<<r<<" is the index of binary search"<<endl;
	return 0;
}
int binarySerch(int a[],int ele,int f,int l)
{
	if(f==l)
	{
		
		return f;		
	}
	else
	{
		int mid=(f+l)/2;
		if(ele<=a[mid])
		{
			return binarySerch(a,ele,f,mid);
		}
		else
		return binarySerch(a,ele,mid+1,l);
	}
}

