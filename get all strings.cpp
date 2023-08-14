//combinations of digits
#include<bits/stdc++.h>
using namespace std;

void get_all(string str,vector<string>&cur,vector<vector<string>>&past,int start,int n)
{
	if(start>=n)
	{
		past.push_back(cur);
		return;
	}
	
	for(int i=start;i<n;++i)
	{
		cur.push_back(str.substr(start,i-start+1));
		get_all(str,cur,past,i+1,n);
		cur.pop_back();
	}
}
void get_strings(string str)
{
	int n=str.length();
	vector<string> cur;
	vector<vector<string>> past;
	get_all(str,cur,past,0,n);
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
	get_strings(str);
	return 0;
}
