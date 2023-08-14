#include<iostream>
using namespace std;

int gcd(int n,int m,int i,int max)
{
	if(n%i==0&&m%i==0)
	{
		max=i;
	}
	if(i==n||i==m)
	return max;
	gcd(n,m,i+1,max);
}
int main()
{
	int n,m;
	cin>>n>>m;
	int max=-1;
	int k=gcd(n,m,1,max);
	cout<<k<<endl;
	return 0;
}
