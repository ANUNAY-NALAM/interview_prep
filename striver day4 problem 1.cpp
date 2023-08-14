#include<bits/stdc++.h>
using namespace std;
int main()
{
	int target;
	cin>>target;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	int p,q;
	unordered_map<int,int> m;
    for(int i=0;i<n;++i)
    {
    	if(m.find(abs(target-arr[i]))!=m.end())
    	{
    		p=m[abs(target-arr[i])];
    		q=i;
		}
		m[arr[i]]=i;
	}
	cout<<q<<" "<<p<<endl;
	return 0;
}
