#include<bits/stdc++.h>
using namespace std;
double my_pow(double x,int n)
{
	double ans= 1.0;
	for(int i=0;i<n;++i)
	{
		ans=ans*x;
	}
	return ans;
}
int main()
{
	cout<<my_pow(2,10)<<endl;
	return 0;
}
