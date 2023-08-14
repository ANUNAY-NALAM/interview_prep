#include<bits/stdc++.h>
using namespace std;
/*
time complexity
best case -o(n)
average case-o(n2)
worst case -o(n2)
space complexity
o(1)
*/
void bubblesort(int arr[],int n)
{
    for(int i=(n-1);i>=0;i--)
    {
        int flag=0;
        for(int j=0;j<i;++j)
        {
            if(arr[j]>arr[j+1])
            {
            swap(arr[j],arr[j+1]);
                flag=1;
            }
           
        }
         if(flag!=1)
             break;
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
    bubblesort(arr,n);
    for(int i=0;i<n;++i)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
