#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> removeduplicates(int* arr ,int size)
{
	vector<int> output;
	unordered_map<int,bool> seen;
	for(int i=0;i<size;++i)
	{
		if(seen.count(arr[i])>0)
		continue;
		else
		{
			seen[arr[i]]=true;
			output.push_back(arr[i]);
		}
	}
	return output;
}
int main()
{
	int arr[]={1,1,1,1,2,3,3,3,3};
	vector<int> output=removeduplicates(arr,9);
	for(int i=0;i<output.size();++i)
	{
		cout<<output[i]<<" ";
	}
	return 0;
}

