#include<iostream>
using namespace std;

int left(int i)
{
	return ((2*i)+1);
}
int right(int i)
{
	return((2*i)+2);
}
void heapify(int heap[],int n,int i)
{
	int s=i;
	int l=left(i);
	int r=right(i);
	if(l<n&&heap[i]<heap[l])
	{
		s=l;
	}
	if(r<n&&heap[s]<heap[r])
	{
		s=r;
	}
	if(s!=i)
	{
		swap(heap[s],heap[i]);
		heapify(heap,n,s);
	}
}
void build_heap(int heap[],int n)
{
	for(int i=(n/2)-1;i>=0;i--)
	{
		heapify(heap,n,i);
	}
}
void heap_sort(int heap[],int n)
{
	build_heap(heap,n);
	for(int i=n-1;i>0;i--)
	{
		swap(heap[0],heap[i]);
		heapify(heap,i,0);
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
		heap_sort(heap,n);
		print_heap(heap,n);
	}
	return 0;
}
