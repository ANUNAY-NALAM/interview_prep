#include<iostream>
using namespace std;

typedef struct stack{
	int capacity;
	int *arr;
	int top;
}Stack;
Stack* intializestack(int capacity)
{
	Stack* st=(Stack*)malloc(sizeof(Stack));
	st->capacity=capacity;
	st->top=-1;
	st->arr=(int*)malloc(sizeof(int) *capacity);
	return st;
}
int size(Stack *st)
{
	return st->top+1;
}
int isEmpty(Stack *st)
{
	return st->top==-1;
}
int isFull(Stack *st)
{
	return st->top+1==st->capacity;
}
void push(Stack *st,int data)
{
	if(isFull(st))
	{
		cout<<"overflow"<<endl;
		return;
	}
	st->top=st->top+1;
	st->arr[st->top]=data;
}
int peek(Stack *st)
{
	if(isEmpty(st))
	{
		cout<<"stack is empty"<<endl;
		return -1;
	}
	return st->arr[st->top];
}
int pop(Stack *st)
{
	if(isEmpty(st))
	{
		cout<<"underflow"<<endl;
		return -1;
	}
	int ele=st->arr[st->top];
	st->top=st->top-1;
	return ele;
}
int main()
{
	
	int n;
	cin>>n;
	Stack* st=intializestack(n);
	for(int i=0;i<n;++i)
	{
		int ele;
		cin>>ele;
		push(st,ele);
	}
	cout<<"Top of the stack"<<peek(st)<<endl;
	cout<<"size of the stack"<<size(st)<<endl;
	cout<<"poping all the elements"<<endl;
	for(int i=0;i<n;++i)
	{
		cout<<pop(st)<<endl;
	}
	return 0;
}
