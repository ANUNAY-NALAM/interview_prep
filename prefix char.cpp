//print all prosible words of k length with n char
#include<iostream>
using namespace std;
void print(char set[],string prefix,int k,int n)
{
	if(k==0)
	{
		cout<<prefix<<endl;
		return;
	}
	for(int i=0;i<n;++i)
	{
		string newp="";
		newp=prefix+set[i];
		print(set,newp,k-1,n);
	}
}
int main()
{
	char set[]={'a','b','c','d'};
	int k=3;
	print(set,"",3,4);
	return 0;
}

