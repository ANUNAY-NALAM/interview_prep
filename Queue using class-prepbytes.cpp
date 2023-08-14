#include<bits/stdc++.h>
using namespace std;
class Queue
{
	int front,rear;
	int size,capacity;
	int *arr;
	public:
		Queue(int capacity)
		{
			this->capacity=capacity;
			front=0;
			size=0;
			rear=capacity-1;
			arr=new int[capacity];
		}
		int isFull()
		{
			return size==capacity;
		}
		int isEmpty()
		{
			return size==0;
		}
		void enqueue(int data)
		{
			if(isFull())
			{
				cout<<"Queue is full"<<endl;
				return;
			}
			rear=(rear+1)%capacity;
			arr[rear]=data;
			size++;
		}
        int front_ele()
		{
			if(isEmpty())
			 return INT_MIN;
			 return arr[front];
		}
		int rear_ele()
		{
			if(isEmpty())
			 return INT_MIN;
			 return arr[rear];
		}
		void display()
		{
			for(int i=0;i<size;i++)
			{
				cout<<arr[(front+i)%capacity]<<" "<<endl;
			}
		}
	};
int main()
{
	int capacity,n;
	cin>>capacity>>n;
	Queue queue1(capacity);
	for(int i=0;i<n;++i)
	{
		int ele;
		cin>>ele;
		queue1.enqueue(ele);
	}
	queue1.display();
	return 0;
}
