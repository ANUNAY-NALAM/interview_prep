#include<bits/stdc++.h>
using namespace std;
int max(int x, int y) {
   return (x > y) ? x : y;
}

void maxProfit(int w[],int p[],int n,int m)
{
    int i,wt;
    int k[n+1][m+1];
    for(int i=0;i<n+1;++i)
    {
    	for(int wt=0;wt<m+1;++wt)
    	{
    	
        if(i==0||wt==0)
        {
            k[i][wt]=0;
        }
        else if(w[i-1]<=m)
        {
        	k[i][wt]=max(p[i-1]+k[i-1][wt-w[i-1]],k[i-1][wt]);
        	cout<<k[i][wt]<<"-->"<<wt<<","<<i<<endl;
		}
		else 
		{
			k[i][wt]=k[i-1][wt];
		}
	}
    }
    cout<<k[n][m];
}
int main()
{
    int wt[]={2,3,4,5};
    int p[]={1,2,5,6};
    int n=sizeof(wt)/sizeof(wt[0]);
    int m=8;
    maxProfit(wt,p,n,m);
    return 0;
}
