/*
Given n email addresses of different domains, please send an email to the first address(in alphabetical order)
 of each domain. Please assume a function sendmail() to send the emails.
Input Array = ['ghi@hotmail.com', 'def@yahoo.com', 'ghi@gmail.com', 'abc@channelier.com', 'abc@hotmail.com', 
'def@hotmail.com', 'abc@gmail.com', 'abc@yahoo.com', 'def@channelier.com',
'jkl@hotmail.com', 'ghi@yahoo.com', 'def@gmail.com'].
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<string> input={'ghi@hotmail.com', 'def@yahoo.com', 'ghi@gmail.com', 'abc@channelier.com', 'abc@hotmail.com', 
'def@hotmail.com', 'abc@gmail.com', 'abc@yahoo.com', 'def@channelier.com',
'jkl@hotmail.com', 'ghi@yahoo.com', 'def@gmail.com'};
//forst lets remove redundacy in input then we sort in alphabetical order
   unordered_map<string,int>m;
   vector<string> ans;
   for(int i=0;i<input.size();++i)
   {
   	    string str=input[i];
   	    string s1=str.substr(find('@'));
   	    if(m.find(s1)==m.end())
   	    {
   	      m.insert({s1,i});
   	      ans.push_back(input[i]);
   	    }  
   }
   for(int i=0;i<ans.size();++i)
   {
   	 cout<<ans[i]<<endl;
   }
   return 0;
}
