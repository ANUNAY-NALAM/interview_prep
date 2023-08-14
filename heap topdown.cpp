#include<iostream>
using namespace std;

int left(int i)
{
	return (2*1);
}
int right(int i)
{
	return (2*i+1);
}
int parent(int i)
{
	return((i-1)/2);
}
void heapify(int heap[],int i,int n)
{
	int p=parent(i);
	int s=i;
	if(heap[p]>heap[s])
	{
		swap(heap[p],heap[s]);
		heapify(heap,p,n);
	}
}
void build_heap(int heap[],int n){
	for(int i=1;i<n;++i)
	{
		heapify(heap,i,n);
	}
}
void print_heap(int heap[],int n)
{
	for(int i=0;i<n;++i)
	{
		cout<<heap[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int heap[n];
		for(int i=0;i<n;++i)
		{
			cin>>heap[i];
		}
		build_heap(heap,n);
		print_heap(heap,n);
	}
	return 0;
}
