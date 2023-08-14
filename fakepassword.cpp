#include <bits/stdc++.h>
  using namespace std;
  void reverse(string &str,int start,int end)
  {
    char temp;
    while(start<end)
    {
      temp=str[start];
      str[start]=str[end];
      str[end]=temp;
      ++start;
      --end;
    }
    
  }
  void leftrotate(string &str,int s)
  {
    reverse(str,0,1);
    reverse(str,2,s-1);
    reverse(str,0,s-1);
  }
  void rightrotate(string &str,int s)
  {
    reverse(str,0,s-3);
    reverse(str,s-2,s-1);
    reverse(str,0,s-1);
  }
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
      string o;
      cin>>o;
      string f;
      cin>>f;
      int n=o.length();
      string dup=o;
      leftrotate(o,n);
      int flag=0;
      if(o==f)
      {
      	flag=1;
      }
      
	 rightrotate(dup,n);
	 if(dup==f)
	 {
	 	flag=1;
	 }
	 if(flag==1)
	 cout<<"Yes"<<endl;
	 else
	 cout<<"No"<<endl;
    }
    return 0;
  }
