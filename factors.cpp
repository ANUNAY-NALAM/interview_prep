#include<iostream>
#include<string>
using namespace std;

void solve(int n,int p,string str)
{
	if(n==1)
	cout<<str<<endl;
	else
	{
		for(int i=p;i<n;++i)
		{
			if(n%i==0)
			{
				solve(n/i,i,str.append(to_string(i)));
			}
		}
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		solve(n,2,"1 ");
		return 0;
	}
}
