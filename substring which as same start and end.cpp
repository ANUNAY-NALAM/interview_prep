#include<bits/stdc++.h>
using namespace std;

bool isvalid(string str,int start,int i)
{
	if(str[i]==str[start])
	{
		return true;
	}
	else
	return false;
}
void count(string str,vector<string>&cur,vector<vector<string>>&past,int start,int n)
{
	if(start>=n)
	{
		past.push_back(cur);
		return;
	}
	for(int i=start;i<n;++i)
	{
		if(isvalid(str,start,i))
		{
			cur.push_back(str.substr(start,i-start+1));
			count(str,cur,past,i+1,n);
			cur.pop_back();
		}
	}
}
void allper(string str)
{
	int n=str.length();
	vector<string>cur;
	vector<vector<string>>past;
	count(str,cur,past,0,n);
	for(int i=0;i<past.size();++i)
	{
		for(int j=0;j<past[i].size();++j)
		{
			cout<<past[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	string str;
	cin>>str;
	allper(str);
	return 0;
}
