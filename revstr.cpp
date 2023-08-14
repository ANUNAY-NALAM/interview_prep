#include<iostream>
using namespace std;

void reverse(char *str)
{
	if(*str)
	{
		reverse(str+1);
		cout<<*str;
		reverse(str+1);
	}
}

int main()
{
	char a[]="abcde";
	reverse(a);
	return 0;
}
