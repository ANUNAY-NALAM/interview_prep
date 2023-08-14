#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int m,n,k;
    cin>>m>>n>>k;
    int arr[m][n];
    for(int i=0;i<m;++i)
    {
      for(int j=0;j<n;++j)
      {
        cin>>arr[i][j];
        arr[i][j]=arr[i][j]*k;
      }
      cout<<endl;
    }
    for(int i=0;i<m;++i)
    {
      for(int j=0;j<n;++j)
      {
        cout<<arr[i][j];
      }
      cout<<endl;
    }
    
    return 0;
  }
