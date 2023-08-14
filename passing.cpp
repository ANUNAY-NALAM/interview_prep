#include<iostream>
using namespace std;
void passbyvalue(int x,int y)
{
	int z;
	z=x;
	x=y;
	y=z;
}
void passbyreference(int &x,int &y)
{
	int z;
	z=x;
	x=y;
	y=z;
}
void passbyaddress(int *x,int *y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;
}

int main()
{
	int a=5,b=6;
	passbyvalue(a,b);
	cout<<a<<","<<b<<endl;
	passbyreference(a,b);
	cout<<a<<","<<b<<endl;
	passbyaddress(&a,&b);
	cout<<a<<","<<b<<endl;
}

