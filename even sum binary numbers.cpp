//print all binary numbers with equal sum
#include<bits/stdc++.h>
using namespace std;
void find_all(int diff,char *str,int start,int end)
{
	if(abs(diff)>(end-start+1)/2)
	{
		return;
	}
	if(start>end)
	{
		if(diff==0)
		{
			cout<<str<<" ";
			return;
		}
		cout<<endl;
	}
	str[start]='0';str[end]='0';
	find_all(diff,str,start+1,end-1);
	str[start]='0';str[end]='1';
	find_all(diff+1,str,start+1,end-1);
	str[start]='1';str[end]='0';
	find_all(diff-1,str,start+1,end-1);
	str[start]='1';str[end]='1';
	find_all(diff,str,start+1,end-1);
}
int main()
{
	int n;
	cin>>n;
	char str[2*n+1];
	str[2*n]='\0';
	find_all(0,str,0,2*n-1);
	return 0;
}
