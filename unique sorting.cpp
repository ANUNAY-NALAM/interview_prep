#include <bits/stdc++.h>
  using namespace std;
  
  int sorted(int arr[])
  {
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"n2::"<<n<<endl;
    if(n==1)
    return 1;
    
    for(int i=1;i<n;++i)
    {
      if(arr[i]<arr[i-1])
      {
        return 0;
      }
    }
    return 1;
  }
  int newway(int arr[],int start,int end)
  {
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"n1::"<<n<<endl;
    int maximum=INT_MIN;
    if(sorted(arr))
    {
      return n;
    }
    int mid=start+(end-start)/2;
    maximum= max(newway(arr,start,mid),newway(arr,mid+1,end));
  
    return maximum;
  }
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;++i)
      {
        cin>>arr[i];
      }
      int k=newway(arr,0,n-1);
      cout<<k<<endl;
    }
    return 0;
  }
