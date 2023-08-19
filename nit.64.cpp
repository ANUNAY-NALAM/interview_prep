//fibonacii using memorization
#include<iostream>
using namespace std;
int a[50];
int fibo(int n)
{
	if(a[n]!=-1)
	return a[n];
	if(n<=1)
	{
		a[n]=n;
		return a[n];
	}
	a[n]=fibo(n-1)+fibo(n-2);
	return a[n];
}
int main()
{
	for(int j=0;j<50;j++)
	{
		a[j]=-1;
	}
	int n,i;
	cout<<"enter the number"<<endl;
	cin>>n;
	i=fibo(n);
	cout<<i<<endl;
	
	return 0;	
}
