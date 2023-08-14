#include<bits/stdc++.h>
using namespace std;
int num_ways(int n,int arr[])
{
    if(n==0||n==1)
    {
        return 1;
    }
    if(arr[n]!=-1)
       return arr[n];
    arr[n]= num_ways(n-1,arr)+num_ways(n-2,arr);
}
int main()
{
    int n;
    cin>>n;
    
    int arr[n+1];
    memset(arr,-1,sizeof(arr));
    int p=num_ways(n,arr);
    cout<<p<<endl;
    return 0;
}
