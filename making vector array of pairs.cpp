#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<pair<int,int>> vect;
	int arr1[]={10,20,30,40};
	int arr2[]={1,2,3,4};
	for(int i=0;i<4;++i)
	vect.push_back(make_pair(arr1[i],arr2[i]));
	for(int i=0;i<4;++i)
	{
		cout<<vect[i].first<<" "<<vect[i].second<<endl;
	}
	return 0;
}
