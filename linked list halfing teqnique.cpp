#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node* next;
};
Node* new_Node(int d)
{
	Node* temp=new Node;
	temp->data=d;
	temp->next=NULL;
	return temp;
}
void print(Node* head)
{
	while(head)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}
Node *reverse(Node *head)
{
//write your code here
   if(head==NULL||head->next==NULL)
   {
     return head;
   }
   else
   {
     Node * temp=head;
     Node * slow;
     Node * fast;
     slow=head;
     fast=head->next;
     slow->next=NULL;
     while(fast!=NULL)
     {
       temp=fast->next;
        fast->next=slow;
        slow=fast;
        fast=temp;
     }
     return slow ;
   }
}
int main()
{
   Node* head=new_Node(1);
   head->next=new_Node(2);
   head->next->next=new_Node(3);
   head->next->next->next=new_Node(4);
   head->next->next->next->next=new_Node(5);
   print(head);
   Node* slow=head;
   Node*fast=head;
   while(fast->next!=NULL&&fast->next->next!=NULL)
   {
	   slow=slow->next;
  	   fast=fast->next->next;
   }
   cout<<"slow::"<<slow->data<<endl;
   slow->next=reverse(slow->next);
   cout<<"slow::"<<slow->next->data<<endl;
   return 0;
}
