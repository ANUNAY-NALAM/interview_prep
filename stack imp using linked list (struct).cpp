#include<iostream>
using namespace std;
typedef struct Node{
	int data;
	struct Node* next;
}Node;
Node * head=NULL;
int size=0;
void push(int data)
{
	Node *newNode=(Node*)malloc(sizeof(Node));
	if(!newNode)
	{
		cout<<"heap overflow"<<endl;
		return;
	}
	newNode->data=data;
	newNode->next=head;
	head=newNode;
	size++;
}
int pop()
{
	if(head==NULL)
	{
		cout<<"stack was empty"<<endl;
	}
	Node * temp=head;
	int ele=head->data;
	head=head->next;
	size--;
	free(temp);
	return ele;
}
int peek()
{
	if(head==NULL)
	{
		cout<<("stack empty")<<endl;
		return -1;
	}
	return head->data;
	
}
int Size()
{
	return size;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;++i)
	{
		int ele;
		cin>>ele;
		push(ele);
	}
	cout<<"Top of the stack:"<<peek()<<endl;
	cout<<"size of the stack"<<Size()<<endl;
	cout<<"poping all the elements"<<endl;
	for(int i=0;i<n;++i)
	{
		cout<<pop()<<endl;
	}
	return 0;
}
