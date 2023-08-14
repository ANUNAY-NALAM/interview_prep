#include<iostream>
using namespace std;
void call_by_value(char a,char b)
{
	int c=a+b;
	cout<<"by value"<<c<<endl;
}
void call_by_reference(char &a,char &b)
{
	int c=a+b;
	cout<<"by reference"<<c<<endl;
}
void call_by_address(char *a,char *b)
{
	int c=*a+*b;
	cout<<"by_address"<<c<<endl;
}
int main()
{
    char a='b';
	char b='c';
	call_by_value(a,b);
	call_by_reference(a,b);
	call_by_address(&a,&b);
	return 0;
}
