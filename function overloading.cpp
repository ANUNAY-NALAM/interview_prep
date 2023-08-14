#include<iostream>
using namespace std;

int volume(int s)
{
	return (s*s*s);
}
int volume(int r,int s)
{
	return (2.4*r*s);
}
int volume(int l,int b,int h)
{
	return (l*b*h);
}
int main()
{
	int k=3;
	cout<<"1st"<<volume(k)<<endl;
	cout<<"2nd"<<volume(k,k+2)<<endl;
	cout<<"3rd"<<volume(k,k+1,k+3)<<endl;
	return 0;
}
