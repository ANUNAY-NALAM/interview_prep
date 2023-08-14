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
void detectLoop(Node* head)
{
    Node* fast=head;
    Node* slow=head;
    bool flag=false;
    do
    {
        if(fast->next->next==NULL||fast->next==NULL)
        {
            flag=true;
            break;
        }
        fast=fast->next->next;
        slow=slow->next;
    }while(fast!=slow);
    if(flag)
    {
        cout<<"no loop";
    }
    else
    {
        cout<<"loop at"<<fast->data<<endl;
    }
}
int main()
{
    Node* head=new_Node(1);
   head->next=new_Node(2);
   head->next->next=new_Node(3);
   head->next->next->next=new_Node(4);
   head->next->next->next->next=new_Node(5);
   head->next->next->next->next->next=new_Node(6);
   head->next->next->next->next->next->next=head->next->next->next;
   detectLoop(head);
    //print(head);
    return 0;
}
