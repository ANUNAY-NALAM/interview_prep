#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}
void print(vector<int> adj[],int n)
{
	for(int i=0;i<n;++i)
	{
		cout<<"adjacency of the list"<<i<<"is:"<<endl;
		for(auto ele:adj[i])
		{
			cout<<"-->"<<ele<<endl;
		}
	}
}
int main()
{
	int n,e;
	cin>>n>>e;
	vector<int> adj[n];
	for(int i=0;i<n;++i)
	{
		int u,v;
		cin>>u>>v;
		addEdge(adj,u,v);
	}
	return 0;
}
