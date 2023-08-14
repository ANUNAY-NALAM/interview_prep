#include<iostream>
using namespace std;

bool mat[6][6];
void addEdge(int u,int v)
{
	mat[u][v]=true;
	mat[v][u]=true;
}
void print()
{
	for(int i=0;i<6;++i)
	{
		for(int j=0;j<6;++j)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
    for(int i=0;i<n;++i)
    {
    	int u,v;
        cin>>u>>v;
        addEdge(u,v);
	}
	print();
	return 0;
}
