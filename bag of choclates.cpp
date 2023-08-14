#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
  long long t;
    cin>>t;
    while(t--)
    {
      long long n,k;
      cin<<n<<k;
      long long arr[n+1];
      
      long long com=k;
      for(int i=1;i<=n;++i)
      {
         com=com*i;
      }
      com=com%(1000003);
      cout<<com;
    }
    
    return 0;
  }
