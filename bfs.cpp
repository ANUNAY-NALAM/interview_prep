#include<bits/stdc++.h>
using namespace std;
class Graph{
	int nodes;
	list<int> *adj;
	public:
		Graph(int nodes)
		{
			this->nodes=nodes;
			adj=new list<int>[nodes]; 
		}
		void dfs(int v);
		void addEdges(int v,int u);
};
void Graph::dfs(int v)
{
	bool* visited=new bool[v];
	for(int i=0;i<nodes;++i)
	{
		visited[i]=false;
	}
	list<int> queue;
	visited[v]=true;
	queue.push_back(v);
	while(!queue.empty())
	{
		v=queue.front();
		cout<<v<<endl;
		queue.pop_front();
		for(auto ele: adj[v])
		{
			if(!visited[ele])
			{
				visited[ele]=true;
				queue.push_back(ele);
			}
		}
	}
}

void Graph::addEdges(int v,int u)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}
int main()
{
	int edges,nodes;
	cin>>edges>>nodes;
	Graph obj(nodes);
	for(int i=0;i<edges;++i)
	{
		int v,u;
		cin>>v>>u;
		obj.addEdges(v,u);
	}
	obj.dfs(0);
	return 0;
}
