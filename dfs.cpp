#include<bits/stdc++.h>
using namespace std;

class graph{
	int nodes;
	list<int> *adj;
	public:
		graph(int nodes)
		{
			nodes=this->nodes;
			adj=new list<int>[nodes];
		}
		void addEdge(int u,int v);
		void bfs(int v);
		
};
void graph::bfs(int v)
{
	bool* visited=new bool[nodes];
	for(int i=0;i<nodes;++i)
	{
		visited[i]=false;
	}
	list<int> queue;
	visited[v]=true;
	queue.push_back(v);
	while(!queue.empty())
	{
		int n=queue.front();
		cout<<n<<" ";
		queue.pop_front();
		for(auto ele: adj[n])
		{    
		    if(visited[ele]==false)
		    {
			queue.push_back(ele);
			visited[ele]=true;
		    }
		}
	}
}
void graph::addEdge(int u,int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}


int main()
{
	int edges,var;
	cin>>edges>>var;
	graph obj(var);
	for(int i=0;i<edges;++i)
	{
	    int u,v;
	    cin>>u>>v;
	    obj.addEdge(u,v);
	}
	obj.bfs(0);
	return 0;
}
