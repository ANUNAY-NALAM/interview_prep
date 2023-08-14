#include <bits/stdc++.h>
#include<string>
  using namespace std;
  
  void recur(int n,string s)
  {
    if(s.length()==n)
    {
      cout<<s<<endl;
      return;
    }
    
    for(int i=1;i<=9;++i)
    {
    	
      return recur(n,s.append(to_string(i)));
    }
  }
  
  
    //write your code here
    int main()
    {
      int t;
      cin>>t;
      while(t--)
      {
        int n;
        cin>>n;
        string s;
        recur(n," ");
      }
      return 0;
    }
