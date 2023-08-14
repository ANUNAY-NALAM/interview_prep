//binary recursion
//fibonacii series
//1 1 2 3 5 8 13 21 44 65 
#include<iostream>
using namespace std;
int fibo(int n)
{
	if(n<1)
	return -1;
	if(n==1||n==2)
	return 1;
	return (fibo(n-1)+fibo(n-2));
}
int main()
{
	int n;
	cin>> n;
	int p=fibo(n);
	cout<<p<<endl;
	return 0;
}
