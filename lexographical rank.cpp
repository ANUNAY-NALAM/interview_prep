//lexographical rank
#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
	if(n<=1)
	return 1;
	else
	{
	  return n*fact(n-1);
	}
}

int count(char *str,int low,int high)
{
	int cright=0;
	for(int i=low+1;i<=high;++i)
	{
		if(str[i]<str[low])
		++cright;
	}
	return cright;
}

void findRank(char *str)
{
	int len,mul;
	len=strlen(str);
	mul=fact(len);
	int rank=1;
	int countRight;
	for(int i=0;i<len;++i)
	{
		mul=mul/(len-i);
		countRight=count(str,i,len-1);
		rank = rank+mul*countRight;
	}
	cout<<"rank is:"<<rank<<endl;
}

int main()
{
	char str[]="badc";
	findRank(str);
	return 0;
}
