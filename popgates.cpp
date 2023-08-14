#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        char arr[n+1];
        int c=0;
        for(int i=1;i<=n;++i)
        {
            cin>>arr[i];
        }
        for(int i=n;i>(n-k);--i)
        {
           
            if((arr[i]=='T'&& (c%2!=0))||(arr[i]=='H' && (c%2==0)))
            {
                ++c; 
            }
        }
        int count=0;
        if(c%2==0)
        {
            for(int i=1;i<=(n-k);++i)
            {
                if(arr[i]=='H')
                {
                	++count;
				}
            }
        }
        else if(c%2!=0)
        {
            for(int i=1;i<=(n-k);++i)
            {
                 if(arr[i]=='T')
                 {
                 	++count;
				 }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
