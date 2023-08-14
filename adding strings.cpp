#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	string str1="999";
	string str2="999";
	int a=0,b=0;
	int len1=str1.length();
	int len2=str2.length();
	for(int i=0;i<len1;++i)
	{
		int p= str1[i]-'0';
		a=a+p*pow(10,len1-i-1);
		
	}

	for(int i=0;i<len2;++i)
	{
		int p= str2[i]-'0';
		b=b+p*pow(10,len2-i-1);
	}
	
	cout<<a+b<<endl;
	return 0;
}
