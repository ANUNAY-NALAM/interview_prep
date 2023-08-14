#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	string str1="123";
	string str2="456";
	if(str1.length()>str2.length())
	 swap(str1,str2);
	int n1=str1.length();
	int n2=str2.length();
	reverse(str1.begin(),str1.end());
	reverse(str2.begin(),str2.end());
	int carry=0;
	string result;
	for(int i=0;i<n1;++i)
	{
		int a= (str1[i]-'0')+(str2[i]-'0')+carry;
		carry= a/10;
		result.push_back(a%10+'0');
	 } 
	for(int i=n1;i<n2;++i)
	{
		int a=(str2[i]-'0')+carry;
		carry=a/10;
		result.push_back(a%10+'0');
	}
	if(carry)
	{
		result.push_back(carry+'0');
	}
	reverse(result.begin(),result.end());
	cout<<result;
	return 0;
}
