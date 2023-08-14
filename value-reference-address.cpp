//call by value---- call by reference-- call by address 
#include<iostream>
using namespace std;

void callByValue(int a,int b)
{
	int c=a+b;
	cout<<c<<endl;
}

void callByReference(int &a,int &b)
{
	int c=a+b;
	cout<<c<<endl;
}

void callByAddress(int *a,int *b)
{
	int c=*a+*b;
	cout<<c<<endl;
}


int main()
{
	int a=5,b=6;
	callByValue(a,b);
	callByReference(a,b);
	callByAddress(&a,&b);
	return 0;
}
