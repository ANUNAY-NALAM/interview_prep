#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--)
  {
    string str;
    cin>>str;
    int n=str.length();
    int arr[26];
    for(int i=0;i<26;++i)
    {
      arr[i]=-1;
    }
    int max= 0;
    int count=0;
    for(int i=0;i<n;++i)
    {
      if(arr[str[i]-'a']==-1)
      {
      arr[str[i]-'a']=i;
      ++count;
      }
      else
      {
        if(max<count)
        max=count;
        count=0;
        i=arr[str[i]-'a'];
        
         for(int j=0;j<26;++j)
         {
         arr[j]=-1;
         }
      }
      cout<<"i==>"<<i<<endl;
      cout<<"count==>"<<count<<endl;
      
    }
    if(max<count)
        max=count;
    cout<<max<<endl;
  }
}
