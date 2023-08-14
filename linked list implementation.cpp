#include<iostream>
using namespace std;

typedef struct Node{
	int data;
	struct Node * next;
}Node;
Node* head=NULL;
void insertAtBegining(int data)
{
	Node* new_Node= (Node*)malloc(sizeof(Node));
	new_Node->data=data;
	new_Node->next=head;
	head=new_Node;
}
void insertAtEnd(int data)
{
	Node* new_Node=(Node*) malloc(sizeof(Node));
	new_Node->data=data;
	new_Node->next=NULL;
	if(head==NULL)
	{
		head= new_Node;
	}
	else
	{
	Node* temp;
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=new_Node;
    }
}

void display()
{
	Node*temp;
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"-->";
		temp=temp->next;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int data;
		for(int i=0;i<n;++i)
		{
			cin>>data;
			insertAtEnd(data);
		}
		cout<<"insert at beging"<<endl;
		display();
	}
}
