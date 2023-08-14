//Reverse first k elements of a given linked list
#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};

Node* newNode(int d)
{
	Node* temp=new Node;
	temp->data=d;
	temp->next=NULL;
}

Node* reverseGiven(Node *head,int k)
{
	Node *curr=head;
	Node *n=NULL;
	Node *prev=NULL;
		for(int i=0;i<k;++i)
		{
		
			n=curr->next;
			curr->next=prev;
			prev=curr;
			curr=n;
		}
		head->next=curr;
		head=prev;
			
		
	return prev;
}

int main()
{
	Node* head;
	head=newNode(10);
	head->next=newNode(18);
	head->next->next=newNode(20);
	head->next->next->next=newNode(25);
	head->next->next->next->next=newNode(35);
	cout<<"enter no of element you wanted to reverse::"<<endl;
	int k;
	cin>>k;
	Node *p=reverseGiven(head,k);
	while(p!=NULL)
	{
		cout<<p->data<<"-->";
		p=p->next;
	}
	return 0;
	
}
