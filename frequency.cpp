/*Vector is better for frequent insertion and deletion, whereas Arrays are much better suited for
 frequent access of elements scenario. Vector occupies much more memory
 in exchange for managing storage and growing dynamically, whereas Arrays are a 
 memory-efficient data structure.*/
#include<iostream>
#include<vector>
using namespace std;
void frequency(int arr[],int n)
{
	vector<bool> visited(n,false);
	for(int i=0;i<n;++i)
	{
		int count=0;
		if(visited[i]==true)
		{
			continue;
		}
		++count;
		for(int j=i+1;j<n;++j)
		{
			if(arr[i]==arr[j])
			{
				visited[j]=true;
				++count;
			}
		}
		cout<<arr[i]<<"-->"<<count<<endl;
	}
	 
}
int main()
{
	int arr[]={1,1,1,4,5,1,1,6,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	frequency(arr,n);
	return 0;
}
