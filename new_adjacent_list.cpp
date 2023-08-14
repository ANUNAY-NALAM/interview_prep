#include<bits/stdc++.h>
using namespace std;

void addEdge(int r,int c,vector<int> adj[])
{
    adj[r].push_back(c);
    adj[c].push_back(r);
}
void print(vector<int> adj[],int r)
{
    for(int i=0;i<r-1;++i)
    {
        cout<<i<<"::";
        for(auto ele: adj[i])
        {
            cout<<"-->"<<ele;
        }
        cout<<endl;
    }
}

int main()
{
    int e,r;
    cin>>e>>r;
    //cout<<e<<r<<endl;
    vector<int> adj[r];
    for(int i=0;i<=e;++i)
    {
       int r,c;
       cin>>r>>c;
       addEdge(r,c,adj);
    }
    
    print(adj,r);
    
    return 0;
}
