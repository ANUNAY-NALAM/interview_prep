#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		int key;
		Node *next;
	Node(){
		data=0;
		key=0;
		next=NULL;
	}	
	Node(int d,int k)
	{
		data=d;
		key=k;
	}
};

class circularLinkedList{
	public:
		Node* head;
	
	circularLinkedList(){
		head=NULL;
	}
	
	//to check whether a node exists
	Node* nodeExists(int k){
		Node *temp=NULL;
		Node *ptr=head;
		if(ptr==NULL)
		{
			return temp;
		}
		else
		{
			do
			{
				if(ptr->key==k)
				{
					temp=ptr;
				}
				ptr=ptr->next;
			}while(ptr!=head);
		}
		return temp;
	}
	//to append a node
	void appenedNode(Node* newNode)
	{
		if(nodeExists(newNode->key)!=NULL)
		{
			cout<<"Node already exists with this key value"<<endl;
		}
		else
		{
			if(head==NULL)
			{
				head=newNode;
				newNode->next=head;
				cout<<"Node appended at first position"<<endl;
			}
			else
			{
				Node *ptr=head;
				while(ptr->next!=head)
				{
					ptr=ptr->next;
				}
				ptr->next=newNode;
				newNode->next=head;
				cout<<"Node appended at last position"<<endl;
			}
		}
	}
	//prepending the node
	void prepend(Node* newNode)
	{
		if(nodeExists(newNode->key)!=NULL)
		{
			cout<<"Node already exists with this key value"<<endl;
		}
		else
		{
			if(head==NULL)
			{
				head=newNode;
				newNode->next=head;
				cout<<"Node appended at first position"<<endl;
			}
			else
			{
				Node*ptr=head;
				while(ptr->next!=head)
				{
					ptr=ptr->next;
				}
				ptr->next=newNode;
				newNode->next=head;
				head=newNode;
				cout<<"Node inserted at first position"<<endl;
			}
		}
	}
	//inserting at desired position 
	void insertAt(Node *newNode,int k)
	{
		if(nodeExists(newNode->key)!=NULL)
		{
			cout<<"Node already exists with this key value"<<endl;
		}
		else if(nodeExists(k)!=NULL){
			Node *ptr=head;
			Node *temp=NULL;
			while(ptr->key!=k)
			{
				ptr=ptr->next;
			}
			temp=ptr->next;
			ptr->next=newNode;
			newNode->next=temp;
		}
		else
		{
			cout<<"Noo node with key value:"<<k<<"-- after which we have to insert this Node"<<endl;
		}
	}
	void deleteNode(int k)
	{
		if(nodeExists(k)==NULL)
		{
			cout<<"Node that you people wanted to delete doesn't exist'"<<endl;
		}
		else
		{
			if(head->key==k)
			{
				Node *ptr=head;
				Node *temp=head->next;
				while(ptr->next==head){
					ptr=ptr->next;
				}
				ptr->next=ptr->next->next;
				head=ptr;
				cout<<"Iam sorry but your desired node was no more"<<endl;
			}
			else
			{
			Node *temp=NULL;
			Node *ptr=head;
			while(ptr->next->key!=k)
			{
				ptr=ptr->next;
			}
			ptr->next=ptr->next->next;
			cout<<"fortunately your desired node was no more"<<endl;
			}
				
		}
	}
	//update Node---
	void updateNode(int k,int newData)
	{
		Node* ptr=nodeExists(k);
		if(ptr==NULL)
		{
			cout<<"Meeru update cheyali anukuna node andubatuloo leedu"<<endl;
		}
		else
		{
			ptr->data=newData;
			cout<<"good new's you have been successfully updated"<<endl;
		}
	}
	void letsPrint()
	{
		if(head==NULL)
		{
			cout<<"no fuck was here"<<endl;
		}
		else{
		Node*ptr=head;
		cout<<"key--->"<<ptr->key<<"|||"<<"data--->"<<ptr->data<<endl;
		ptr=ptr->next;
		while(ptr!=head)
		{
			cout<<"key--->"<<ptr->key<<"|||"<<"data--->"<<ptr->data<<endl;
			ptr=ptr->next;
		}
	    }
	}
};

int main(){
	circularLinkedList obj;
	int key1;
	int data1;
	int k1;
	int op;
	do{
		cout<<"can you select an option for me plese:"<<endl;
		cout<<"1)appendNode"<<endl;
		cout<<"2)prependNode"<<endl;
		cout<<"3)insertafter"<<endl;
		cout<<"4)deleteNode"<<endl;
		cout<<"5)updateNode"<<endl;
		cout<<"6)printNode"<<endl;
		cout<<"7)get lost"<<endl;
		cout<<"you can select:::";
		cin>>op;
		Node* n=new Node();
		cout<<endl;
		switch(op)
		{
			case 0:
				break;
			case 1:
				cout<<"key:"<<endl;
				cin>>key1;
				cout<<"data:"<<endl;
				 cin>>data1;
				 n->key=key1;
				 n->data=data1;
			     obj.appenedNode(n);	
			     break;
			case 2:
				cout<<"key:"<<endl;
				cin>>key1;
				cout<<"data:"<<endl;
				 cin>>data1;
				 n->key=key1;
				 n->data=data1;
				 obj.prepend(n);
				 break;
			case 3:
				cout<<"key:"<<endl;
				cin>>key1;
				cout<<"data:"<<endl;
				 cin>>data1;
				 n->key=key1;
				 n->data=data1;
				 cout<<"enter its jhonjigri:"<<endl;
				 cin>>k1;
				 obj.insertAt(n,k1);
				 break;
			case 4:
			    cout<<"enter key you wanted to get him out:"<<endl;
				cin>>k1;
				obj.deleteNode(k1);
				break;
			case 5:
				cout<<"key of the Node"<<endl;
				cin>>key1;
			    cout<<"data to be changed"<<endl;
				cin>>data1;
				obj.updateNode(key1,data1);
				break;
			case 6:
			    obj.letsPrint();
			    break;
			case 7:
			    exit(0);
			default:
			    cout<<"plese keep your lens and try again"<<endl; 
		}
		
	}while(1);
}
