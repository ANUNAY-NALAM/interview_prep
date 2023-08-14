// using priority queue stl max heap
#include<bits/stdc++.h>
using namespace std;
int main()
{
	priority_queue<pair<int,int>> pq;
	pq.push(make_pair(10,200));
	pq.push(make_pair(20,300));
	pq.push(make_pair(15,400));
	pair<int,int> t=pq.top();
	cout<<t.first<<" "<<t.second<<endl;
	return 0;
}
