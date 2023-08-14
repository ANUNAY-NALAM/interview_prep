//generate all binary strings without alternate 1's
//K : size of string 
//First We Generate All string starts with '0'
//initialize n = 1 . 
//GenerateALLString ( K  , Str , n )
//  a. IF n == K 
//     PRINT str.
//  b. IF previous character is '1' :: str[n-1] == '1'
//     put str[n] = '0'
//     GenerateAllString ( K , str , n+1 )
//  c. IF previous character is '0' :: str[n-1] == '0'
//     First We Put zero at end and call function 
//      PUT  str[n] = '0'
//           GenerateAllString ( K , str , n+1 )  
//      PUT  str[n] = '1'
//           GenerateAllString ( K , str , n+1 )
//
//Second Generate all binary string starts with '1'
//DO THE SAME PROCESS
#include<bits/stdc++.h>
using namespace std;
void all_strings(int k,char str[],int n)
{
	if(k==n)
	{
		cout<<str<<endl;
		return;
	}
	if(str[n-1]=='0')
	{
		str[n]='0';
		all_strings(k,str,n+1);
		str[n]='1';
		all_strings(k,str,n+1);
	}
	else if(str[n-1]=='1')
	{
		str[n]='0';
		all_strings(k,str,n+1);
	}
}
void generate(int k)
{
	char str[k];
	str[0]='0';
	all_strings(k,str,1);
	str[0]='1';
	all_strings(k,str,1);
}
int main()
{
	int k;
	cin>>k;
	generate(k);
	return 0;
}

