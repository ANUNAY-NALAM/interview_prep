//sort(str.begin(), str.end()); ->used to sort string
#include<bits/stdc++.h>
using namespace std;
void swap(char *a,char *b)
{
	char temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void allPer(char *a,int l,int r)
{
	if(l==r)
	{
		cout<<a<<endl;
	}
	else{
		for(int i=l;i<=r;++i)
		{
			swap((a+l),(a+i));
			allPer(a,l+1,r);
			swap((a+l),(a+i));
		}
	}
}
int main()
{
	char str[]="ABC";
	int n=strlen(str);
	allPer(str,0,n-1);
	return 0;
}
/*time complexity -> o(time to print one permutaion *no of permutaions) 
->o(n*n!)*/
