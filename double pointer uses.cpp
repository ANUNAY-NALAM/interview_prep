#include<bits/stdc++.h>
using namespace std;
void fun(int  **p)
{
	int q=10;
	*p=&q;
	cout<<"p22==>"<<*p<<endl;
	cout<<"p33==>"<<p<<endl;
}
int main()
{
	int r=20;
	int *p=&r;
	cout<<"p11==>"<<*p<<endl;
	fun(&p);
	cout<<*p;
	return 0;
}
