//stack span problem
#include<iostream>
using namespace std;

class Stack{
	int* arr1;
	int* arr2;
	int top;
	int count;
	int capacity;
  public:
	Stack(int capacity)
	{
		this->capacity=capacity;
		top=-1;
		count=1;
		arr1= new int[capacity];
		arr2= new int[capacity];
	}
	void push(int data)
	{
		top++;
		arr1[top]=data;
		arr2[top]=count;
		cout<<arr2[top]<<" ";
		count=1;
	}
	void pop()
	{
		count=count+arr2[top];
		top--;
	}
	int peek()
	{
		if(top==-1)
		return -1;
		return arr1[top];
	}
};
int main()
{
	int n;
   cout<<"enter no of elements"<<endl;
   cin>>n;
	Stack obj(n);
   int a[n];
   for(int i=0;i<n;++i)
   {
   	 cin>>a[i];
   }
   int i=0;
   int flag=0;
   while(i!=n)
   {
   	  flag=0;
   	  int count=1;
   	  if(obj.peek()==-1&&flag==0)
   	  {
   	  	obj.push(a[i]);
   	  	flag=1;
		 }
   	  else if(obj.peek()<a[i] )
   	  {
   	  	while(obj.peek()<a[i])
   	  	{
   	  		obj.pop();
	    }
	  }
	  if(obj.peek()>a[i]&&flag==0)
	  {
	  	obj.push(a[i]);
	  	flag=1;
	  }
	  if(obj.peek()==-1&&flag==0)
   	  {
   	  	obj.push(a[i]);
   	  	flag=1;
	  }
	  ++i;
   }
  return 0;
}
