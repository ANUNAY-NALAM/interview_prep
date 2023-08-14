#include<bits/stdc++.h>
using namespace std;

int recur(int n,int l,int h)
{

	if(l>=h)
	return 1;   
	int l1=n/(pow(10,l));
	l1=l1%10;
	int h1=n/(pow(10,h));
	h1=h1%10;
	if(h1!=l1)
	return 0;
	else
	recur(n,l+1,h-1);
	return 1;
}

int main()
{
	int n;
	cin>>n;
	//find number of digits in number
	int z=n;
	int p=0;
	while(n!=0)
	{
		n=n/10;
		++p;
	}
	int x=recur(z,0,p-1);
	if(x==0)
	{
		cout<<"not a palindrome"<<endl;
	}
	else
	{
		cout<<"it is a palindrome"<<endl;
	}
	return 0;
}
