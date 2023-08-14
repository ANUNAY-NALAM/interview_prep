#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node * next;
		Node(int data)
		{
			this->data=data;
			next=NULL;
		}
};
class Stack{
	Node* head;
	public:
	  Stack()
	  {
	  	head=NULL;
	  }
	void push(int data)
	{
		Node * newNode=new Node(data);
		newNode->next=head;
		head=newNode;
	  }  
    int pop()
	{
		if(head==NULL)
		{
			cout<<"stack is empty"<<endl;
		}
		int ele=head->data;
		head=head->next;
		 return ele;
	 } 
	int peek()
	{
		 if(head==NULL)
		 {
		 	cout<<"stack is empty"<<endl;
		 }
		 return head->data;
	}
};

int main()
{
	Stack obj;
	int n;
	cin>>n;
	cout<<"inserting elements:"<<endl;
	for(int i=0;i<n;++i)
	{
		int ele;
		cin>>ele;
		obj.push(ele);
	}
	cout<<"element in top of the stack:"<<obj.peek()<<endl;
	cout<<"kicing out elements:"<<endl;
	for(int i=0;i<n;++i)
	{
		cout<<obj.pop()<<endl;
	}
	return 0;
}
