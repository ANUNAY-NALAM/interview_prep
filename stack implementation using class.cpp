#include<iostream>
using namespace std;
class Stack{
	int *arr;
	int top;
	int capacity;
	public:
		Stack(int capacity)
		{
			this->capacity=capacity;
			arr=new int[capacity];
			top=-1;
		}
		int size()
		{
			return top+1;
		}
		bool isEmpty()
		{
			return top==-1;
		}
		bool isFull()
		{
			return top+1==capacity;
		}
		void push(int data)
		{
			if(isFull())
			{
				cout<<"overflow"<<endl;
				return;
			}
			top=top+1;
			arr[top]=data;
		}
		int pop()
		{
			if(isEmpty())
			{
				cout<<"underflow"<<endl;
				return -1;
			}
			int ele=arr[top];
			top=top-1;
			return ele;
		}
		int peek()
		{
			if(isEmpty())
			{
				cout<<"stack is empty"<<endl;
			}
			return arr[top];
		}
};
int main()
{
	int capacity;
	cin>>capacity;
	Stack obj(capacity);
	cout<<"adding elements to stack:"<<endl;
	for(int i=0;i<capacity;++i)
	{
		int ele;
		cin>>ele;
		obj.push(ele);
		cout<<ele<<endl;
	}
	cout<<"Top of the stack"<<obj.peek()<<endl;
	cout<<"size of the stack"<<obj.size()<<endl;
    cout<<"poping all the elements:"<<endl;
	for(int i=0;i<capacity;++i)
	{
		int ele=obj.pop();
		cout<<ele<<endl;
	}	
	return 0;
}
