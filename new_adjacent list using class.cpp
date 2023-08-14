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
     void addEdge(int r,int c)
     {
         adj[r].push_back(c);
         adj[c].push_back(r);
     }
    void print()
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
};
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
    obj.print();
    return 0;
}
