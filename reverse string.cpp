#include<iostream>
using namespace std;
void recur(string &str,int l,int h)
{
	if(l>=h)
	return;
	
	swap(str[l],str[h]);
	recur(str,l+1,h-1);
}
int main()
{
	string str;
	cin>>str;
	int n=str.length();
	recur(str,0,n-1);
	cout<<str;
	return 0;
}
