#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,p,s;
    
    cin>>t;
    while(t--)
    {
    	int n;
        cin>>n;
        int arr[12];
        for(int i=0;i<12;++i)
		{
			arr[i]=0;
		}
        for(int i=0;i<n;++i)
        {
            int p,s;
            cin>>p>>s;
            if(s>arr[p]&& p<9)
             arr[p]=s;
        }
        int sum=0;
        for(int i=1;i<9;++i)
        {
           sum=sum+arr[i];
        }
        cout<<sum;
    }
    return 0;
}
