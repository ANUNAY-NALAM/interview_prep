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
	vector<int> vect;
	vector<vector<int>> res;
	for(int i=0;i<n;++i)
	{
		vect.push_back(arr[i]);
	}
	sort(vect.begin(),vect.end());
	for(int i=0;i<n;++i)
	{
		for(int j=i+1;j<n;++j)
		{
			int ptr1=arr[i];
			int ptr2=arr[j];
			int sum=ptr1+ptr2;
			sum=sum-target;
			int start=j+1;
			int end=n-1;
			while(start<end)
			{
				cout<<"this"<<endl;
				if(vect[start]+vect[end]>target)
				{
					++start;
				}
				else if(vect[start]+vect[end]<target)
				{
					--end;
				}
				else
				{
					vector<int> ktr;
					ktr.push_back(vect[i]);
					ktr.push_back(vect[j]);
					ktr.push_back(vect[start]);
					ktr.push_back(vect[end]);
					res.push_back(ktr);
					cout<<"djfd";
				}
			}
		}
	}
	for(int i=0;i<res.size();++i)
	{
		for(int j=0;j<res[i].size();++j)
		{
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
