#include<bits/stdc++.h>
using namespace std;

bool get_subsetsum(int arr[],int n,int sum)
{
    int mat[n+1][sum+1];
    memset(mat,0,sizeof(mat));
    mat[n][sum]=1;
    for(int i=n-1;i>=0;--i)
    {
        for(int j=sum;j>=0;--j)
        {
            if(mat[i+1][j]==1)
              {
                  mat[i][j]=1;
                  if(j-arr[i]>=0)
                  mat[i][j-arr[i]]=1;
              }
        }
    }
    if(mat[0][0])
    return true;
    else
    return false;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    if(get_subsetsum(arr,n,sum))
    cout<<"yes their exists"<<endl;
    else
    cout<<"oops not there"<<endl;
    return 0;
}
