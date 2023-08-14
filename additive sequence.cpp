#include<bits/stdc++.h>
using namespace std;
int val(string a,int pos)
{
	if(pos>=a.length())
	return 0;
	return (a[pos]-'0');
}
string add(string a,string b)
{
	int i=a.length()-1;
	int j=b.length()-1;
	int carry=0;
	string sum="";
	while(i>=0||j>=0)
	{
		int t=val(a,i)+val(b,i)+carry;
		sum=t%10+'0';
		carry=t/10;
		i--;
		j--;
	}
	if(carry)
	{
		sum+=carry+'0';
	}
	reverse(sum.begin(),sum.end());
	return sum;
}
bool isvalid(string str)
{
	if(str.size()<1||str[0]=='0')
	return false;
	return true;
}
bool addition(list<string>&res,string a,string b,string c)
{
	if(!isvalid(a)||!isvalid(b))
	{
		return false;
	}
	cout<<"a==>"<<a<<endl;
	cout<<"b==>"<<b<<endl;
	cout<<"c==>"<<c<<endl;
	string sum=add(a,b);
	if(sum==c)
	{
		res.push_back(sum);
		return true;
	}
	if(c.size()<=sum.size()||sum != c.substr(0, sum.size()))
	{
		return false;
	}
	else
	{
		res.push_back(sum);
		return addition(res,b,sum,c.substr(sum.size()));
	}
}
list<string> additive(string num)
{
	list<string> res;
	int l=num.length();
	for(int i=1;i<=(l/2);++i)
	{
		for(int j=1;j<=(l-i)/2;++j)
		{
			if(addition(res,num.substr(0,i),num.substr(i,j),num.substr(i+j)))
			{
				res.push_front(num.substr(i,j));
				res.push_front(num.substr(0,i));
				return res;
			}
		}
	}
	res.clear();
	return res;
}
void print(list<string> res)
{
	for(auto it=res.begin();it!=res.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
}
int main()
{
	string num="235813";
	list<string> res;
	res=additive(num);
	print(res);
	return 0;
}
