//fibonacii using iteration
#include<iostream>
using namespace std;
int fibo(int n)
{
	if(n<=1)
	return n;
	int a[n];
	a[0]=0;a[1]=1;
	int i,j;
	for(i=2;i<=n;++i)
	{
	     a[i]=a[i-1]+a[i-2];
	     j=a[i];
	}
	return j;
	
	
}
int main()
{
	int i,n;
	cout<<"enter the num"<<endl;
	cin>>n;
	i=fibo(n);
	cout<<i<<endl;
	return 0;
}
