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
        for(int i=0;i<n;++i)
        {
            cin>>arr[i];
        }
        cout<<"navigator:"<<arr[n-k-1]<<endl;
        int count=0;
        if(arr[n-k-1]=='H')
        {
        	for(int i=0;i<(n-k-1);i++)
        	{
        		if(arr[i]=='T')
        		++count;
			}
		}
        else
        {
        	for(int i=0;i<(n-k-1);i++)
        	{
        		if(arr[i]=='H')
        		  ++count;
			}
		}
		cout<<count<<endl;
    }
    return 0;
}
