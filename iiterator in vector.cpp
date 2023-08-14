#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main()
{
	vector<int> our;
	our.push_back(1);
	our.push_back(2);
	our.push_back(3);
	our.push_back(4);
	our.push_back(5);
	our.push_back(6);
	vector<int>::iterator it=our.begin();
	while(it != our.end())
	{
		cout<<*it<<endl;
		++it;
	}
}
