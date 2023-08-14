//palindrome ny recursion expericed method
#include<iostream>
using namespace std;

bool digit(int n)
{
	if(n>=0&&n<10)
	return true;
	else
	return false;
}
bool palindrome(int n,int *dup)
{
	if(digit(n))
	{
		return(n== *dup%10);
	}
	if(!palindrome(n/10,dup))
	{
		return false;
	}
	*dup=*dup/10;
	return (n%10==*dup%10);

}
bool recur(int n)
{
	if(n<0)
	{
		n=n*(-1);
	}
	int * dup=new int (n);
	return palindrome(n,dup);
}
int main()
{
	int n;
	cin>>n;
	if(recur(n))
	{
		cout<<"it is a palindrome"<<endl;
	}
	else
	{
		cout<<"it is not a palindrome"<<endl;
	}
	return 0;
}
