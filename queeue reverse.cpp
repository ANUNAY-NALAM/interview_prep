#include <bits/stdc++.h>
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
		
		void enqueue(int data)
		{
			if(isFull())
			{
				
				return;
			}
			rear=(rear+1)%capacity;
			arr[rear]=data;
			size++;
		}
		int get_front()
		{
		  
		  return arr[front];
		}
		void dequeue()
		{
			if(isempty())
			{
				return;
			}
			size--;
			front=front+1;
			front=front%capacity;
			
		}
		int get_size()
		{
		  return size;
		}
		void display()
		{
		  for(int i=front;i<=rear;++i)
		  cout<<arr[i]<<" ";
		  cout<<endl;
		}
		int front_ele()
		{
		  return arr[front];
		}
		int rear_ele()
		{
		  return arr[rear];
		}
};
  int main()
  {
    int n;
    cin>>n;
    int k;
    cin>>k;
    Queue obj1(n);
    for(int i=0;i<n;++i)
    {
      int t;
      cin>>t;
      obj1.enqueue(t);
    }
    int arr[k];
    for(int i=0;i<k;++i)
    {
      arr[i]=obj1.front_ele();
      obj1.dequeue();
    }
    for(int i=k-1;i>=0;--i)
    {
      obj1.enqueue(arr[i]);
    }
    obj1.display();

    return 0;
  }
