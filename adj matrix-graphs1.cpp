#include<bits/stdc++.h>
using namespace std;

bool adjMat[6][6];

void addEdges(int v,int u)
{
	adjMat[v][u]=true;
	adjMat[u][v]=true;
}
void print()
{
	for(int i=0;i<6;++i)
	{
	  for(int j=0;j<6;++j)
	  {
	  	cout<<adjMat[i][j]<<" ";
	  }	
	  cout<<endl;
	}
}
int main()
{
	for(int i=0;i<6;++i)
	{
		int v,u;
		cin>>v>>u;
		addEdges(v,u);
	}
	print();
	return 0;
}

