#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	cin>>k;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	// int low=0;
	// int high=k-1;
	map<int,int> m;
	for(int i=0;i<k;++i)
	{
		m[arr[i]]++;
	}
	// for (auto i : m)
    //     cout << i.first << "   " << i.second<< endl;
	// cout<<m.size()<<endl;
	if(m.size()==k)
	{
		cout<<"["<<0<<","<<k-1<<"]"<<endl;
		
		
	}
	else
	{
	for(int i=1;i<n-k+1;++i)
	{
		// cout<<"m.size("<<m.size()<<endl;
	    m[arr[i-1]]--;
		
		//  cout<<"check"<<m[arr[i-1]]<<endl;
		if(m[arr[i-1]]==0)
		{
			m.erase(arr[i-1]);
		}
		m[arr[k+i-1]]++;
		// for (auto k : m)
        // cout << k.first << "   " << k.second<< endl;
		if(m.size()==k)
		{
			cout<<"["<<i<<","<<k+i-1<<"]"<<endl;
			break;
		}  
		                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
	}
	}
	return 0;
}
