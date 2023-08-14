#include<bits/stdc++.h>
using namespace std;
void addEdges(int v,int u,vector<int>adj[])
{
	adj[v].push_back(u);
	adj[u].push_back(v);
}

void recur(vector<int>adj[],vector<bool>visited,int v)
{
	visited[v]=true;
	for(int i=0;i<adj[v].size();++i)
	{
		if(visited[adj[v][i]]==false)
		recur(adj,visited,i);
		else
		{
			cout<<"cycle detected"<<endl;
		}
	}
}

void fun(vector<int>adj[],int n)
{
	vector<bool> visited(n,false);
	for(int i=0;i<n;++i)
	{
		if(visited[i]==false)
		recur(adj,visited,i);
	}
}
int main()
{
	int nodes,edges;
	cin>>nodes>>edges;
	vector<int>adj[nodes];
	for(int i=0;i<edges;++i)
	{
		int v,u;
		cin>>v>>u;
		addEdges(v,u,adj);
	}
	fun(adj,nodes);
	return 0;
}
