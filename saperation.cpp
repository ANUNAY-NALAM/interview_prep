#include<iostream>
using namespace std;

int sap(int n,int m)
{
	if(n==0)
	{
	return 1;
    }   
	else if(m==0||n<0)
	return 0;
	else
	{
		return sap(n-m,m)+sap(n,m-1);
	}
}

int main()
{
	int n,m;
	cin>>n>>m;
	int k=sap(n,m);
	cout<<k<<endl;
	return 0;
}
