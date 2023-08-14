#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int edit(string s,string t,int m,int n)
{
	    if(m==-1)
        return n+1;
        if(n==-1)
        return m+1;
        
        if(dp[m][n]!= -1)
        {
            return dp[m][n];
        }
        if(s[m]==t[n])
        {
            return dp[m][n]=edit(s,t,m-1,n-1);
        }
        int a=edit(s,t,m-1,n-1);
        int b=edit(s,t,m,n-1);
        int c=edit(s,t,m-1,n);
        return dp[m][n]=(min(a,min(b,c)))+1;
}
int main()
{
	string s="geek";
	string t="gesek";
	int m=s.length();
	int n=t.length();
	memset(dp,-1,sizeof(dp));
	cout<<edit(s,t,m-1,n-1)<<endl;
}
