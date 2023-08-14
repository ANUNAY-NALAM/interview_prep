#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
vector<int> remove(int*a,int size)
{
	vector<int> output;
	unordered_map<int,bool> seen;
	for(int i=0;i<size;i++)
	{
		if(seen.count(a[i])>0)
		{
			continue;
		}
		seen[a[i]]= true;
		output.push_back(a[i]);
	}
	return output;
}
int main()
{
	int a[]={1,1,2,3,2,4,5,6,4,5,7,8,6,9};
	vector<int> output=remove(a,14);
	for(int i=0;i<output.size();i++)
	{
		cout<<output[i]<<endl;
	}
	return 0;
}
