//memcpy
#include<iostream>
using namespace std;
int main()
{
	char str1[]="anunay";
	char str2[]="coder";
	puts("str 1 before memcpy");
	puts(str1);
	memcpy(str1,str2,sizeof(str2));
	puts("str 1 after memcpy");
	puts(str1);
	return 0;
	/*
	(below code results in error because redeclaration is not possible in c++)
	char str1[]="anunay";
	char str1[]="coder";
	puts(str1);
	return 0;
	*/
	
	
}
