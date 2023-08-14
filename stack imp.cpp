#include<iostream>
using namespace std;
class Stack{
	int top;
	int size,capacity;
	int *arr;
	public:
		Stack(int capacity)
		{
			top=0;
			size=0;
			this->capacity=capacity;
			arr=new int[capacity];
		}
		int isempty()
		{
			return size==0;
		}
		int isfull()
		{
			return size==capacity;
		}
		void push(int data)
		{
			if(isfull())
			{
				cout<<"stack full"<<endl;
			}
			else
			{
				arr[top]=data;
				++top;
				++size;
			}
		}
		void pop()
		{
			if(isempty())
			{
		        cout<<"stack was empty to pop"<<endl;
			}
			else
			{
			--top;
			--size;
		    }
			
		}
		int top_fun()
		{
			if(isempty())
			return INT_MIN;
			else
			return arr[top];
		}
		void display()
		{
			for(int i=0;i<size;++i)
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
	Stack obj(capacity);
	for(int i=0;i<capacity;++i)
	{
		int d;
		cin>>d;
		obj.push(d);
	}
	obj.pop();
	cout<<"top::"<<obj.top_fun()<<endl;
	return 0;
}
