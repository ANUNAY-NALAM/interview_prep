#include<bits/stdc++.h> 
#include<algorithm>
using namespace std;
int repeat(string s1)
{
	 string s2=s1;
		    int i,j;
		    int m=s1.length();
		    int n=s2.length();
		    int dp[m+1][n+1];
	
		    for(i=0;i<m+1;++i)
		    {
		        for(j=0;j<n+1;++j)
		        {
		            if(i==0||j==0)
		            {
		                dp[i][j]=0;
		            }
		            else if(s1[i]==s2[j]&&i!=j)
		            {
		                dp[i][j]=dp[i-1][j-1]+1;
		            }
		            else
		            {
		                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		            }
		            cout<<dp[i][j]<<" ";
		        }
		        cout<<endl;
		    }
		    return dp[m][n];
	
}
int main()
{
	string s1="axxxy";
	cout<<"common letters:"<<repeat(s1);
	return 0;
}
