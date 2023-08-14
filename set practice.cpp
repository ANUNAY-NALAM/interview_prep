#include<iostream>
#include<unordered_set>
using namespace std;

 void display(unordered_set<int> s){
	unordered_set<int>:: iterator itr;
	for(itr=s.begin();itr!=s.end();++itr)
	{
		cout<<*itr<<" ";
	}
	cout<<endl;
}
int main()
{
	unordered_set<int> s;
	s.insert(24);
	s.insert(6);
	s.insert(12);
	s.insert(48);
	s.erase(12);
	display(s);
	if(s.find(48)!=s.end())
	   cout<<"48 is there"<<endl;
	unordered_set<int>::iterator itr = s.find(24);
	cout<<*itr<<endl;
	return 0;
}
