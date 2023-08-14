#include<iostream>
using namespace std;

class Adjacent{
    int nodes;
    bool **arr;
    public:
      Adjacent(int nodes)
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
      void addEdge(int r,int c)
      {
          arr[r][c]=true;
          arr[c][r]=true;
      }
      void print()
      {
          for(int i=0;i<nodes;++i)
          {
              for(int j=0;j<nodes;++j)
              {
                  if(arr[i][j])
                  {
                  	cout<<i<<"-->"<<j<<endl;
				  }
              }
              cout<<endl;
          }
      }
};
int main()
{
    int e,n;
    cin>>e>>n;
    Adjacent obj(n);
    for(int i=0;i<e;++i)
    {
        int r,c;
        cin>>r>>c;
        obj.addEdge(r,c);
    }
    obj.print();
    return 0;
}
