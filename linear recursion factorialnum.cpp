//linear recursion
//factorial number
#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==1)
	return 1;
	else
	{
		return n*fact(n-1);
	}
	
}
int main()
{
	int n;
	cin>>n;
	cout<<fact(n)<<endl;
	return 0;
}
/*4->fact(4)->4*fact(3)->4*3*fact(2)->4*3*2*fact(1)->4*3*2*/




























