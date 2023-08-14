#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int subset_sum(int arr[],int n,int sum)
{
    if(sum==0)
        return 1;
    if(n==-1)
        return 0;
    if(sum-arr[n]<0)
      dp[n][sum]= subset_sum(arr,n-1,sum);
    else
      dp[n][sum]= (subset_sum(arr,n-1,sum)||subset_sum(arr,n-1,sum-arr[n]));
    return dp[n][sum];
}
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
    memset(dp,-1,sizeof(dp));
    if(subset_sum(arr,n-1,sum))
    {
      cout<<"foound that idot"<<endl;
    }
    else
    {
        cout<<"iam sorry"<<endl;
    }
    return 0;
    
}
