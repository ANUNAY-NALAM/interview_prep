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
	vector<int>nums;
	for(int i=0;i<n;++i)
	{
	    nums.push_back(arr[i]);
	}
	sort(nums.begin(),nums.end());
    set<vector<int>> s;
	for(int i=0;i<n;++i)
	{
		for(int j=i+1;j<n;++j)
		{
			for(int k=j+1;k<n;++k)
			{
				int sum= arr[i]+arr[j]+arr[k];
				sum=sum-target;
				if(binary_search(nums.begin()+k+1,nums.end(),sum))
				{
					vector<int> vect;
					vect.push_back(arr[i]);
					vect.push_back(arr[j]);
					vect.push_back(arr[k]);
					vect.push_back(sum);
					sort(vect.begin(),vect.end());
					s.insert(vect);
				}
			}
		}
	}
	vector<vector<int>>sum(s.begin(),s.end());
	for (int i = 0; i < sum.size(); i++) {
        for (int j = 0; j < sum[i].size(); j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }
	return 0;
}
