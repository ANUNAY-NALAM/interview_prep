//tail method
//fibonacii number
//1 1 2 3 5 8 13 21 
#include<iostream>
using namespace std;
int fibo(int n,int x,int y)
{
	if(n<1)
	return -1;
	if(n==1)
	return y;
    return (fibo(n-1,y,x+y));
}
int main()
{
	int n;
	cin>>n;
	int p=fibo(n,1,1);
	cout<<p<<endl;
	return p;
}
