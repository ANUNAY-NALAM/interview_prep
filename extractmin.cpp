//extract_min and decrese key
#include<iostream>
using namespace std;
int size;

int left(int i)
{
	return((2*i)+1);
}
int right(int i)
{
	return((2*i)+2);
}
int parent(int i)
{
	return((i-1)/2);
}
void heapify_down(int heap[],int i,int n)
{
	int s=i;
	int l=left(i);
	int r=right(i);
	if(l<n&&heap[l]<heap[i])
	{
		s=l;
	}
	if(r<n&&heap[r]<heap[s])
	{
		s=r;
	}
	if(s!=i)
	{
		swap(heap[s],heap[i]);
		heapify_down(heap,i,n);
	}
}
void build_heap(int heap[],int n)
{
	for(int i=((n/2)-1);i>=0;i--)
	{
		heapify_down(heap,i,n);
	}
}
void print_heap(int heap[],int n)
{
	for(int i=0;i<size;++i)
	{
		cout<<heap[i]<<" ";
	}
	cout<<endl;
}
int extract_min(int heap[],int n)
{
	int root=heap[0];
	heap[0]=heap[size-1];
	size--;
	heapify_down(heap,0,size);
	return root;
}
void decrese_key(int heap[],int i,int val)
{
	heap[i]=val;
	while(i!=0&&heap[parent(i)]>heap[i])
	{
		swap(heap[parent(i)],heap[i]);
		i=parent(i);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		size=0;
		int n;
		cin>>n;
		int heap[n];
		for(int i=0;i<n;++i)
		{
			cin>>heap[i];
			++size;
		}
		build_heap(heap,n);
		print_heap(heap,n);
		cout<<extract_min(heap,n)<<endl;
		print_heap(heap,n);
		decrese_key(heap,4,-1);
		print_heap(heap,n);
	}
	return 0;
}
