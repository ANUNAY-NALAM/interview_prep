#include<iostream>
using namespace std;
bool palindrome(string str,int s,int e)
{
	if(s>=e)
	return true;
	else if(str[s]!=str[e])
	return false;
	else
	{
		palindrome(str,s+1,e-1);
	 } 
}
int main()
{
	string str;
	cin>>str;
	int n=str.length();
	cout<<palindrome(str,0,n-1);
	return 0;
}
