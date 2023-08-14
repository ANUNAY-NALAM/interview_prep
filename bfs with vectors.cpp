#include<bits/stdc++.h>
using namespace std;

void addEdges(int v,int u,vector<int>adj[])
{
	adj[v].push_back(u);
	adj[u].push_back(v);
}

bfs(vector<int>adj[],int n)
{
	vector<int>visited(n,false);
	list<int> queue;
	queue.push_back(0);
	visited[0]=true;
	while(!queue.empty())
	{
		int v=queue.front();
		cout<<v<<endl;
		queue.pop_front();
		for(auto ele: adj[v])
		{
			if(!visited[ele])
			{
		    queue.push_back(ele);
		    visited[ele]=true;
		    }
		}
	}
}
int main()
{
   int edges,nodes;
   cin>>edges>>nodes;
   vector<int>adj[nodes];
   for(int i=0;i<nodes;++i)
   {
   	int v,u;
   	cin>>v>>u;
   	addEdges(v,u,adj);
	}	
	bfs(adj,nodes);
	
	return 0;
}
