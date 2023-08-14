#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
    struct Node *next;
};
struct Node *newNode(int data)
{
	Node *temp=new Node;
	temp->data=data;
	temp->next=NULL;
	return temp;
}

void  removeDup(struct Node* head)
{
	map<int,int> m;
	struct Node *cur= head;
	struct Node *prev=cur;
	cur=prev->next;
	while(cur)
	{
		if(m[cur->data])
		{
			prev->next=cur->next;
			free(cur);
		}
		else{
			m[cur->data]=1;
			prev=cur;
		}
		cur=prev->next;
	}
}



void printList(struct Node *head)
{
    struct Node *cur=head;
    cout<<cur->data;
    cur=cur->next;
	while(cur)
	{
		cout<<"->"<<cur->data;
		cur=cur->next;
	}
	cout<<endl;
}


int main()
{
	struct Node *head = newNode(5);
	head->next=newNode(2);
	head->next->next=newNode(2);
	head->next->next->next=newNode(4);
	head->next->next->next->next=newNode(3);
	head->next->next->next->next->next=newNode(4);
	cout<<"before removing"<<endl;
	printList(head);
	removeDup(head);
	cout<<"after removing"<<endl;
	printList(head);
	return 0;
}
