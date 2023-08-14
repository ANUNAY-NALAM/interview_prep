#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
      string str;
      cin>>str;
      int n= str.length();
      int n1=0,n2=0;
      for(int i=0;i<n/2;++i)
      {
        n1=n1+str[i];
        cout<<"n1==>"<<n1<<endl;
      }
      for(int i=(n-1);i>(n/2);--i)
      {
        n2=n2+str[i];
        cout<<"n2==>"<<n2<<endl;
      }
      if(n%2==0)
      {
      	n2=n2+str[n/2];
	  }
      cout<<abs(n2-n1)<<endl;
    }
    return 0;
  }
