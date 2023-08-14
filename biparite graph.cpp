#include<bits/stdc++.h>
using namespace std;

bool isBiparite(int **adj,int color[],int root,int nodes )
{
	color[root]=1;
	queue<int> q;
	q.push(root);
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		for(int v=0;v<nodes;++v)
		{
			if(adj[u][v]==1)
			{
				if(color[v]==-1)
				{
					color[v]=1-color[u];
					q.push(v);
				}
				else if(color[v]==color[u])
				{
					return false;
				}
			}
		}
		
		
	}
	return true;
}
int main()
{
	int edges,nodes;
	cin>>edges>>nodes;
	int *adj[nodes];
	for(int i=0;i<nodes;++i)
	{
		adj[i]=new int[nodes];
		int v,u;
		cin>>v>>u;
		adj[v][u]=1;
	}
	int color[100005];
	memset(color,-1,sizeof color);
	if(isBiparite(adj,color,0,nodes))
	{
		cout<<"graph is biparite"<<endl;
	}
	else
	{
		cout<<"graph is not biparite"<<endl;
	}
	return 0;
	
}
