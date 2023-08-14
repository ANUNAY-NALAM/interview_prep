#include<bits/stdc++.h>
using namespace std;

void toh(int n,int a,int b,int c)
{
	toh(n-1,a,b,c)
	cout<<"move a disc from"<<a<<"to"<<b<<endl;
	toh(n-1,b,c,a);
}
int main()
{
	int n;
	cin>>n;
	toh(n,1,2,3);
	return 0;
}
