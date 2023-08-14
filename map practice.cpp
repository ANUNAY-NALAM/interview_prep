//map using balenced bst so that key will be insorted order where as unordered map uses hash table 
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
void display(unordered_map<int,int> map1)
{
	unordered_map<int,int>:: iterator itr;
	for(itr=map1.begin();itr!=map1.end();++itr)
	{
		cout<<itr->first<<" "<<itr->second;
		cout<<endl;
	}
	cout<<endl;
}
int main()
{
	unordered_map<int,int> map1;
	map1.insert(make_pair(2,10));
	map1[3]=5;
	display(map1);
	if(map1.find(3)!=map1.end())
	 cout<<"element is there"<<endl;
	return 0;
}
