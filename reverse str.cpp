#include<iostream>
using namespace std;

void reverse(char *str)
{
	if(*str)
	{
		reverse(str+1);
		cout<<*str;
	}
}
int main()
{
	char a[]="anunay";
	reverse(a);
	return 0;
}
