#include<bits/stdc++.h>
using namespace std;
stack<int> st;

void insert(int x)
{
	if(st.size()==0||st.top()>x)
	{
		st.push(x);
		return;
	}
	int a=st.top();
	st.pop();
	insert(x);
	st.push(a);
}
void reverse()
{
	if(st.size()>0)
	{
		int x=st.top();
		st.pop();
		reverse();
		insert(x);
	}
}
int main()
{
	st.push(2);
	st.push(4);
	st.push(1);
	st.push(5);
	st.push(3);
	reverse();
	while(st.size())
	{
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<endl;
    return 0;
}
