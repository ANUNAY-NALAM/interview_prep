//NCR BY USING DIVIDE AND CONQOUR
#include<iostream>
using namespace std;
int choose(int n,int r)
{
	if(r==0||n==r)
	{
		return 1;
	}
	
	return(choose(n-1,r)+choose(n-1,r-1));
}
int main()
{
	int i,n,r;
	cout<<"enter n"<<endl;
	cin>>n;
	cout<<"enter r"<<endl;
	cin>>r;
	i=choose(n,r);
	cout<<i<<endl;
	return 0;
}

