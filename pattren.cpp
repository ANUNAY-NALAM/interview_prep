#include<iostream>
using namespace std;

void pat(int n)
{
	cout<<n<<" ";
	if(n<=0)
	 return;
	
	pat(n-5);
	cout<<n<<" ";
    
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		pat(n);
	}
	return 0;
}
