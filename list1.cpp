#include<iostream>
#include <algorithm>
#include<list>
using namespace std;
int main()
{
	std::list<int> my_list ={12,3,4,6,9};
	for(int x: my_list)
	{
		cout<<x<<endl;
	}
	return 0;
}
