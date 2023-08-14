#include<iostream>
using namespace std;

class Queue{
	int *arr;
	int front, rear;
	int capacity,size;
	public:
		Queue(int capacity){
			this->capacity=capacity;
			size=0;
			rear=capacity-1;
			front=0;
			arr=new int[capacity];
		}
		int isempty()
		{
			return size==0;
		}
		int isFull()
		{
			return size==capacity;
		}
		int front_ele()
		{
			if(isempty())
			return INT_MIN;
			else
			{
				return arr[front];
			}
		}
		int rear_ele()
		{
			if(isempty())
			return INT_MIN;
			else
			{
				return arr[rear];
			}
		}
		void enqueue(int data)
		{
			if(isFull())
			{
				cout<<"queue is full wait for a while"<<endl;
				return;
			}
			rear=(rear+1)%capacity;
			arr[rear]=data;
			size++;
		}
		void dequeue()
		{
			if(isempty())
			{
				cout<<"queue is empty"<<endl;
				return;
			}
			cout<<"element deleted fron queue"<<arr[front]<<endl;
			front=front+1;
			front=front%capacity;
		}
		void display()
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
	
	int capacity;
	cin>>capacity;
	Queue obj(capacity);
	for(int i=0;i<capacity;++i)
	{
		int data;
		cin>>data;
		obj.enqueue(data);
	}
	obj.display();
	obj.dequeue();
	obj.dequeue();
	obj.display();
	return 0;
}
