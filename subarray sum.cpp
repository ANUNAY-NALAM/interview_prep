#include<bits/stdc++.h>
using namespace std;
int main()
{
  int sum;
    cin>>sum;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
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
        cout<<"not found"<<endl;
    }
    else
    {
        cout<<"every thing is possible hence found"<<endl;;
    }
    return 0;
}
