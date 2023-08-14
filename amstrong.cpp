#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	cout<<"enter number"<<endl;
	int n;
	cin>>n;
	int k=n;
	int m,sum=0;
	while(n!=0)
	{
		m=n%10;
		sum=sum+pow(m,3);
		n=n/10;
	}
	if(sum==k)
	{
		cout<<"its amstrong"<<endl;
	}
	else
	{
		cout<<"no "<<endl;
	}
	
}
