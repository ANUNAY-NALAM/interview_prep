#include<bits/stdc++.h>
using namespace std;

void addEdges(int v,int u,vector<int>adj[])
{
	adj[v].push_back(u);
}
void recur(vector<int> adj[],stack<int>&s1,stack<int>&s2,int v,vector<int>&visited)
{
	s1.push(v);
	visited[v]=true;
	for(int i=0;i<adj[v].size();++i)
	{
		if(visited[adj[v][i]]==false)
		recur(adj,s1,s2,adj[v][i],visited);
	}
	s2.push(v);
	s1.pop();
}
void print(stack<int>&s2)
{
	while(s2.size())
	{
		cout<<s2.top()<<endl;
		s2.pop();
	}
}

void fun(vector<int> adj[],int n)
{
	stack<int>s1;
	stack<int>s2;
	vector<int> visited(n,false);
	for(int i=0;i<n;++i)
	{
	if(visited[i]==false)	
	recur(adj,s1,s2,i,visited);
    }
	print(s2);
}
int main()
{
	int nodes,edges;
	cin>>nodes>>edges;
	vector<int>adj[nodes];
	for(int i=0;i<edges;i++)
	{
		int v,u;
		cin>>v>>u;
		addEdges(v,u,adj);
	}
	fun(adj,nodes);
	
	return 0;
}
