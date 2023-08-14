#include<bits/stdc++.h>
using namespace std;

class Graph{
   int n;
   list<int>*adj;
   public:
     Graph(int n)
     {
        this->n=n;
         adj= new list<int>[n];
     }
    
   
     void addEdge(int r,int c);
     void print();
    void bfs(int s);
    void dfs(int s);
    void dfs_recur(int s,int visited[]);
};
void Graph::addEdge(int r,int c)
     {
         adj[r].push_back(c);
         adj[c].push_back(r);
     }
void Graph::dfs(int s)
   {
    int *visited=new int[n];
    for(int i=0;i<n;++i)
    {
        visited[i]=false;
    }
    dfs_recur(s,visited);
   }
void Graph::dfs_recur(int s,int visited[])
   {
    visited[s]=true;
    cout<<s<<" ";
    for(auto ele: adj[s])
    {
        if(visited[ele]==false)
        {
            dfs_recur(ele,visited);
        }
    }
}
void Graph::print()
    {
        for(int i=0;i<n-1;++i)
        {
            cout<<i<<"::";
            for(auto ele: adj[i])
            {
                cout<<"-->"<<ele;
            }
            cout<<endl;
        }
    }


void Graph::bfs(int s)
     {
         int *visited=new int[n];
         for(int i=0;i<n;++i)
         {
             visited[i]=false;
         }
         list<int> queue;
         queue.push_back(s);
         visited[s]=true;
         while(!queue.empty())
         {
             int d= queue.front();
             cout<<d<<"-->";
             queue.pop_front();
             for(auto ele: adj[d])
             {
                 if(visited[ele]==false)
                 {
                 queue.push_back(ele);
                     visited[ele]=true;
                 }
            }
        }
     }
int main()
{
    int e,n;
    cin>>e>>n;
    Graph obj(n);
    for(int i=0;i<=e;++i)
    {
        int r,c;
        cin>>r>>c;
        obj.addEdge(r,c);
    }
   // obj.bfs(0);
    obj.dfs(0);
//     obj.print();
    return 0;
}
