#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int f[n+1];
        for(int i=1;i<n+1;++i)
        {
            cin>>f[i];
        }
        int p[n+1];
        
        for(int i=1;i<n+1;++i)
        {
            cin>>p[i];
            
        }
        int ans[m+1]={0};
        for(int i=1;i<n+1;++i)
        {
            ans[f[i]]=ans[f[i]]+p[i];
        }
        int min=INT_MAX;
        int count=0;
        for(int i=1;i<m+1;++i)
        {
            if(ans[i]<min&&ans[i]!=0)
            {
             min= ans[i];
              count=1;
            }
        }
        
        if(count!=1)
        {
        	cout<<0;
		}
		else
        cout<<"min"<<min<<endl;
    }
    return 0;
}
