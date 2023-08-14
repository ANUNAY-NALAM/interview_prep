#include <bits/stdc++.h>
  using namespace std;
  
  int rec(int n,int sum)
  {
    if(n==0)
    return sum ;
    rec(n-1,sum+n);
  }
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int sum=0;
      int k=rec(n,sum);
      cout<<k<<endl;
    }
    return 0;
  }
