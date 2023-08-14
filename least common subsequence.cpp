
#include<bits/stdc++.h> 
#include<algorithm>
using namespace std;
int lcs(char* a,char* b,int m,int n)
{
	int s[m+1][n+1];
	cout<<"kfsfjl";
	int i,j;
	for( i=0;i<m+1;++i)
	{
		for(j=0;j<n+1;++j)
		{
			if(i==0||j==0)
			{
				s[i][j]=0;
			}
			else if(a[i]==b[j]&&i!=j)
			{
				s[i][j]=s[i-1][j-1]+1;
			}
			else
			{
				s[i][j]=max(s[i-1][j],s[i][j-1]);
			}
			cout<<s[i][j]<<endl;
			
		}
	}
	return s[m][n];
	
}
int main()
{
	char a[]="abf";
	char b[]="akkl";
	int m,n;
	m=strlen(a);
	n=strlen(b);
	cout<<"common letters:"<<lcs(a,b,m,n);
	return 0;
}
