#include<iostream>
using namespace std;
class Graph{
	bool** arr;
	int n;
	public:
		Graph(int n)
		{
			this->n=n;
			arr=new bool*[n];
			for(int i=0;i<n;++i)
			{
				arr[i]=new bool[n];
				for(int j=0;j<n;++j)
				{
				  arr[i][j]=false;
			    }
			}
		}
		void addEdge(int u,int v)
		{
			arr[u][v]=true;
			arr[v][u]=true;
		}
		void print()
		{
			for(int i=0;i<n;++i)
			{
				for(int j=0;j<n;++j)
				{
					cout<<arr[i][j]<<" ";
				}
				cout<<endl;
			}
		}
};
int main()
{
	int n;
	cin>>n;
	Graph gp(n);
	int k;
	cin>>k;
	for(int i=0;i<k;++i)
	{
		int u,v;
		cin>>u>>v;
		gp.addEdge(u,v);
	}
	return 0;
}
