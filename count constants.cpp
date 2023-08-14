//count constants
#include<bits/stdc++.h>
using namespace std;

int isconstant(char p)
{
	if(p=='a'||p=='e'||p=='i'||p=='o'||p=='u')
	{
		return 0;
	}
	return 1;
}
int count(string str,int n)
{
	if(n==-1)
	return 0;
	return(count(str,n-1)+isconstant(str[n])); 
}
int main()
{
	string str;
	cin>>str;
	int n=str.length();
	int keep=0;
	int k=count(str,n-1);
	cout<<k<<endl;
	return 0;
}
