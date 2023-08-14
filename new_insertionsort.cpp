#include<bits/stdc++.h>
using namespace std;

void insertionsort(int arr[],int n)
{
    int j;
    for(int i=1;i<n;++i)
    {
        int p=i;
        int f=-1;
        int flag=0;
        int k=arr[p];
        for(j=(p-1);j>=0;--j)
        {
           if(arr[j]>k)
           {
              arr[j+1]=arr[j];
           }
           else if(!flag)
           {
               f=j;
               flag=1;
           }
           
        }
        arr[f+1]=k;
    }
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
    insertionsort(arr,n);
    for(int i=0;i<n;++i)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
