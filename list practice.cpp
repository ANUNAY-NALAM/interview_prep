#include<bits/stdc++.h>
#include<list>
using namespace std;

void display(list<int> list1)
{
	list<int>::iterator itr;
	for(itr=list1.begin();itr!=list1.end();++itr)
	{
		cout<<*itr<<" ";
	}
	cout<<endl;
}

int main()
{
	list<int> list1;
	cout<<list1.size()<<endl;
	int x;
	for(int i=0;i<4;++i)
	{
		cin>>x;
		list1.push_back(x);
	}
	list1.pop_front();
	list1.pop_back();
	list<int>list2=list1;
	list1.merge(list2);
	list1.sort();
	display(list1);
	return 0;
	
}
