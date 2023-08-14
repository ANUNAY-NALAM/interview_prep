#include<bits/stdc++.h>
using namespace std;
int main()
{
  int sum=0;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;++i)
    {
        sum=sum+arr[i];
    }
    sum=sum/2;
    int dp[n+1][sum+1];
    memset(dp,-1,sizeof(dp));
    for(int j=0;j<sum+1;++j)
    {
        dp[0][j]=0;
    }
    for(int i=0;i<n+1;++i)
    {
        dp[i][0]=1;
    }
    for(int i=1;i<=n;++i)
    {
      for(int j=1;j<=sum;++j)
      {
         if(arr[i-1]>j)
             dp[i][j]=dp[i-1][j];
          else
              dp[i][j]=max(dp[i-1][j-arr[i-1]],dp[i-1][j]);
      }
    }
    
    
    if(!dp[n][sum])
    {
        cout<<"we cannot partion this array"<<endl;
    }
    else
    {
        cout<<"we can partiotion into two equal halfs"<<endl;;
    }
    return 0;
}
