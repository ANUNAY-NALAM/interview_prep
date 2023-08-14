//selection sort
#include<bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int n)
{
    
    int k=0;
    for(int i=0;i<n-1;++i)
    {
        int p=arr[i];
        k=i;
        for(int j=i+1;j<n;++j)
        {
            if(arr[j]<p)
            {
                p=arr[j];
                k=j;
            }
            
        }
        swap(arr[k],arr[i]);
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
    selectionsort(arr,n);
    for(int i=0;i<n;++i)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
