#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    // for(int i=0;i<n;++i)
    // {
    //     cout<<arr[i];
    // }
    vector<int>vec;
    for(int i=0;i<n-1;++i)
    {
        if(arr[i]!=arr[i+1])
         vec.push_back(arr[i]);
    }
    if(vec[vec.size()-1]!=arr[n-1])
    vec.push_back(arr[n-1]);
    
    for(int i=0;i<vec.size();++i)
    {
        cout<<vec[i]<<endl;
    }
    return 0;
}
