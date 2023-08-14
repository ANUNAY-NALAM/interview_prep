#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
      int s;
      cin>>s;
      int a[s];
      int mul=1;
      for(int i=0;i<s;++i)
      {
        cin>>a[i];
      }
      for(int i=0;i<s;++i)
      {
        mul= mul*a[i];
      }
      cout<<mul;
    }
    return 0;
  }
