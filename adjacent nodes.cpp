//adjacent matrix list representation
#include<bits/stdc++.h>
using namespace std;
class Graph{
	int nodes;
	list<int> *adj;
	public:
		Graph(int n)
		{
			this->nodes=n;
			adj=new list<int>[nodes];
		}
		void addEdge(int u,int v)
		{
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		void print()
		{
			for(int i=0;i<nodes;++i)
			{
				cout<<"adjacency of node "<<i<<"is:"<<endl;
				for(auto ele:adj[i])
				{
					cout<<"-->"<<ele<<endl;
				}
			}
		}
};
int main()
{
	int n,e;
	cin>>n>>e;
	Graph obj(n);
	for(int i=0;i<n;++i)
	{
		int u,v;
		cin>>u>>v;
		obj.addEdge(u,v);
	}
	obj.print();
	return 0;
}
