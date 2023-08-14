#include<bits/stdc++.h>
using namespace std;

vector<int> func(int arr[],int n)
{
	vector<int> vec;
	int i=0;
	int j=n-1;
	while(i<j)
	{
		vec.push_back(arr[i]);
		vec.push_back(arr[j]);
		i++;
		j--;
	}
	return vec;
}
int main()
{
	int n=8;
	int arr[8]={1,2,3,4,5,6,7,8};
	vector<int> vec=func(arr,n);
	for(int i=0;i<vec.size();++i)
	{
		cout<<vec[i]<<endl;
	}
	return 0;
}
