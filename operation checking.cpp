#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
     int t;
     cin>>t;
     while(t--)
     {
       string s;
       cin>>s;
       int n1=s.length();
       string t;
       cin>>t;
       int n2=t.length();
       int flag=0;
       int j=0;
       if(n1<n2)
       {
         cout<<"NO"<<endl;
       }
       else
       {
       for(int i=0;i<n1;++i)
       {
       	
         
         if(s[i]=='+'&&t[j]=='-')
         {
           flag=1;
           break;
         }
         else if(s[i]=='-'&&t[j]=='+')
         {
           if(s[i+1]=='-')
           {
             ++i;
           }
           else
           {
             flag=1;
             break;
           }
         }
         ++j;
         }
       if(flag==0)
         {
           cout<<"YES"<<endl;
         }
       else if(flag==1)
         {
           cout<<"NO"<<endl;
         }
       }
       
     }
     return 0;
  }
