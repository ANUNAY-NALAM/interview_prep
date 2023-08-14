// C++ program to print all combination
// of size r in an array of size n
// The main function that prints
// all combinations of size r
// in arr[] of size n. This function
// mainly uses combinationUtil()
// A temporary array to store
// all combination one by one
// Print all combination using
// temporary array 'data[]'
/* arr[] ---> Input Array
data[] ---> Temporary array to
store current combination
start & end ---> Starting and
Ending indexes in arr[]
index ---> Current index in data[]
r ---> Size of a combination to be printed */
// Current combination is ready
// to be printed, print it
// replace index with all possible
// elements. The condition "end-i+1 >= r-index"
// makes sure that including one element
// at index will make a combination with
// remaining elements at remaining positions
#include<bits/stdc++.h>
using namespace std;
void combinations(int arr[],int data[],int start,int end,int index,int r);
void get_all(int n,int arr[],int r)
{
	int data[r];
	combinations(arr,data,0,n-1,0,r);
}
void combinations(int arr[],int data[],int start,int end,int index,int r)
{
	if(r==index)
	{
		for(int i=0;i<r;++i)
		{
			cout<<data[i]<<" ";
		}
		cout<<endl;
	}
	for(int i=start;i<=end&& end-i+1>=r-index;++i)
	{
		data[index]=arr[i];
		combinations(arr,data,i+1,end,index+1,r);
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	int r;
	cin>>r;
	get_all(n,arr,r);
	return 0;
}
