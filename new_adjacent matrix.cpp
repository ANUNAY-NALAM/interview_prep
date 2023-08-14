#include<iostream>
using namespace std;
bool arr[1000][1000];
void addEdge(int r,int c)
{
    arr[r][c]=1;
    arr[c][r]=1;
}
void print(int nodes)
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
int main()
{
    int edges,nodes;
    cin>>edges>>nodes;
    for(int i=1;i<=edges;++i)
    {
        int r,c;
        cin>>r>>c;
        addEdge(r,c);
    }
    print(nodes);
    return 0;
}
