#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int min=INT_MAX;
      int max=INT_MIN;
      int arr[n];
      for(int i=0;i<n;++i)
      {
        cin>>arr[n];
        if(arr[n]<min)
        {
          min=arr[n];
        }
        else if(arr[n]>max)
        {
          max=arr[n];
        }
        
      }
      
      cout<<min<<max<<endl;
    }
    
    return 0;
  }
