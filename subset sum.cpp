#include<bits/stdc++.h>
using namespace std;

bool find_that(int n, int arr[],int sum)
{
    if(n==-1)
        return false;
    if(sum-arr[n-1]<0)
        return false;
    if(sum-arr[n-1]==0)
    {
        return true;
    }
    
    if(find_that(n-1,arr,sum-arr[n])||find_that(n-1,arr,sum))
    {
        return true;
    }   
    else
    {
        return false;
    }
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
    if(find_that(n-1,arr,sum))
    {
       cout<<"found thatr busted"<<endl; 
    }
    else
    {
        cout<<"oops not dbms not found"<<endl;
    }
    return 0;
}
