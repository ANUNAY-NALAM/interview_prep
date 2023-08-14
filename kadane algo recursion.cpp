#include<bits/stdc++.h>
using namespace std;

int max_subarray(int arr[],int n,int i,int max_sofar,int max_now)
{
    if(i==n)
    {
        return max_sofar;
    }
    max_now+=arr[i];
    if(max_now<0)
    max_now=0;
    if(max_now>max_sofar&&max_now!=0)
    max_sofar=max_now;
    if(max_now==0&&max_sofar<0)
    {
        if(arr[i]>max_sofar)
        max_sofar=arr[i];
    }
    return max_subarray(arr,n,i+1,max_sofar,max_now);
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
    //max_subarray(arr,n,i,max_sofar,max_now);
    int max_sofar=INT_MIN;
    //int max_now=INT_MIN;
    int p=max_subarray(arr,n,0,max_sofar,0);
    cout<<p<<endl;
    return 0;
}
