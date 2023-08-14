#include<bits/stdc++.h>
using namespace std;

void reverse(string str)
{
	int i=0;
	int j=str.length()-1;
	while(i<j)
	{
		char temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		++i;
		--j;
	}
	cout<<str<<endl;
}
int main()
{
	string str;
	cin>>str;
	reverse(str);
	return 0;
}
