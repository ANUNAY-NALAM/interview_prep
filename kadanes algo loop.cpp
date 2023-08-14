//-2 -3 4 -1 -2 1 5 -3
#include<bits/stdc++.h>
using namespace std;

int max_subarray(int arr[],int n)
{
    int max_sofar=INT_MIN;
    int max_now=0;
    for(int i=0;i<n;++i)
    {
        max_now=max(arr[i],max_now+arr[i]);
        if(max_sofar<max_now)
        {
            max_sofar=max_now;
        }
        if(max_now<0)
        {
            max_now=0;
        }
    }
    return max_sofar;
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
    int p=max_subarray(arr,n);
    cout<<p<<endl;
    return 0;
}
