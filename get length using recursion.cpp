#include<iostream>
using namespace std;

int get_len(char* str)
{
	if(*str=='\0')
	{
		return 0;
	}
	else
	{
		return(1+get_len(str+1));
	}
}
int main()
{
	char  str[]="iamanunay";
	cout<<get_len(str)<<endl;
	return 0;
}
