#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
      int n,min;
      cin>>n;
      int arr[n];
      min=0;
      for(int i=0;i<n;++i)
      {
        cin>>arr[i];
        if(arr[i]<=arr[min])
             min=i;
        
      }
      
      cout<<min;
    }
    
    return 0;
  }
