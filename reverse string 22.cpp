#include<iostream>
using namespace std;

void reverse(char *str)
{
	if(*str){
		reverse(str+1);
		cout<<str[0];
	}
}
int main()
{
	int n;
	cin>>n;
	char str[n];
	reverse(str);
	return 0;
}
