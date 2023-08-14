#include<iostream>
using namespace std;

int grid(int n,int m)
{
	if(n==1||m==1)
	{
		return 1;
	}
	else
	{
		return grid(n,m-1)+grid(n-1,m);
	}
}
int main()
{
	int n,m;
	cin>>n;
	cin>>m;
	int k=grid(n,m);
	cout<<k<<endl;
	return 0;
	
}
