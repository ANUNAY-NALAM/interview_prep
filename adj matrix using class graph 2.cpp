//adjacency matrix using class
#include<bits/stdc++.h>
using namespace std;

class Graph{
	bool **arr;
	int nodes;
	public:
		Graph(int nodes)
		{
			this->nodes=nodes;
			arr=new bool*[nodes];
			for(int i=0;i<nodes;++i)
			{
				arr[i]=new bool[nodes];
				for(int j=0;j<nodes;++j)
				{
					arr[i][j]=false;
				}
			}
		}
		void addNodes(int e,int v)
		{
			arr[e][v]=true;
			arr[v][e]=true;
		}
		void print()
		{
			for(int i=0;i<nodes;++i)
			{
				for(int j=0;j<nodes;++j)
				{
					cout<<arr[i][j]<<" ";
				}
				cout<<endl;
			}
		}
		
};
int main()
{
	int v,e;
	cin>>v>>e;
	Graph obj(v);
	for(int i=0;i<5;++i)
	{
		int v,e;
		cin>>v>>e;
		obj.addNodes(v,e);
	}
	obj.print();
	return 0;
}
