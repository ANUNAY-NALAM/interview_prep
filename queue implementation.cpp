#include<bits/stdc++.h>
using namespace std;
class Queue{
	int front;
	int rear;
	int capacity;
	int *arr;
    public:
    	Queue(int capacity)
    	{
    		front=0;
    		rear=-1;
    		this->capacity=capacity;
    		arr=new int[capacity];
		}
	  void enqueue(int data)
	  {
	  	if(rear==(capacity-1))
	  	{
	  		cout<<"queue full"<<endl;
	  		return;
		  }
	  	for(int i=rear;i>=front;--i)
	  	{
	  		arr[i+1]=arr[i];
		}
		arr[front]=data;
		++rear;
	  }
	  void dequeue()
	  {
	  	if(rear==-1)
	  	{
	  		cout<<"queue is empty"<<endl;
	  		return;
		  }
		  --rear;
	  }
	  void print()
	  {
	  	for(int i=front;i<=rear;++i)
	  	{
	  		cout<<arr[i]<<" "; 
		  }
		  cout<<endl;
	  }
};
int main()
{
	Queue obj(5);
	for(int i=0;i<5;++i)
	{
		int n;
		cin>>n;
		obj.enqueue(n);
	}
	obj.print();
	for(int i=0;i<2;++i)
	{
		obj.dequeue();
	}
	obj.print();
	return 0;
}
