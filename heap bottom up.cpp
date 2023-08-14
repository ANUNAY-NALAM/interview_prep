#include<iostream>
using namespace std;

int left(int i)
{
	return ((2*i)+1);
}
int right(int i)
{
	return ((2*i)+2);
}
int parent(int i)
{
	return ((i-1)/2);
}
void heapify_down(int heap[],int i,int n)
{
	int l=left(i);
	int r=right(i);
	int s=i;
	if((l<n)&&heap[l]<heap[i])
	{
		s=l;
	}
	if((r<n)&&heap[r]<heap[s])
	{
		s=r;
	}
	if(s!=i)
	{
		swap(heap[s],heap[i]);
		heapify_down(heap,s,n);
	}
}
void buildheap(int heap[],int n)
{
	for(int i=(n/2)-1;i>=0;i--)
	{
		heapify_down(heap,i,n);
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
		buildheap(heap,n);
		print_heap(heap,n);
	}
	return 0;
}
