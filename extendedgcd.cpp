#include<iostream>
using namespace std;

int extendedGcd(int a,int b,int *x,int *y)
{
	if(b==0)
	{
		*x=1;
		*y=0;
		return a;
	}
	int x1,y1;
	int result=extendedGcd(b,a%b,&x1,&y1);
	*x=y1;
	*y=x1-(a/b)*y1;
	return result;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int x=0,y=0;
		int result=extendedGcd(a,b,&x,&y);
		cout<<"result:"<<result<<"x==>"<<x<<"y==>"<<y<<endl;
		
	}
	return 0;
}
