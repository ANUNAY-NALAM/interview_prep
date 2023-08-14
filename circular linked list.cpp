#include<iostream>
using namespace std;
class Node{
	public:
		int key;
		int data;
		Node* next;
	Node(){
		key=0;
		data=0;
		next=NULL;
	}	
	Node(int k,int d)
	{
		key=k;
		data=d;
	}
};
class Circular{
	public:
	Node* head;
	Circular(){
		head=NULL;
	}
	Node* nodeexists(int k)
	{
		Node* temp =NULL;
		Node* ptr=head;
		if(ptr==NULL)
		{
			return temp;
		}
		else{
			do
			{
				if(ptr->key==k)
				{
					temp=ptr;
				}
				ptr=ptr->next;
			}
			while(ptr!=head);
		}
		return temp;
	}
	void append(Node *new_node)
	{
		if(nodeexists(new_node->key)!=NULL)
		{
			cout<<"node already present";
		}
		else
		{
			if(head==NULL)
			{
				head=new_node;
				new_node->next=head;
				cout<<"node appended in frist head position"<<endl;
			}
			else
			{
				Node *ptr=head;
				while(ptr->next!=head)
				{
					ptr=ptr->next;
				}
					new_node->next=head;
					ptr->next=new_node;
					cout<<"node appended at the end"<<endl;
				
			}
		}
	}
	void prepend(Node* new_node)
	{
		if(nodeexists(new_node->key)!=NULL)
		{
			cout<<"node already present"<<endl;
		}
		else
		{
			if(head==NULL)
			{
				head=new_node;
				new_node->next=head;
				cout<<"node prepended in frist head position"<<endl;
			}
			else
			{
			
			Node *ptr=head;
			while(ptr->next!=NULL)
			{
				ptr=ptr->next;
			}
			ptr->next=new_node;
			new_node->next=head;
			head=new_node;
			cout<<"node prepend";
		   }
			
		}
	}
	void nodeafter(int k,Node* new_node)
	{
		Node* ptr=nodeexists(k);
		if(ptr==NULL)
		{
			cout<<"node exits"<<endl;
		}
		else
		{
			if(nodeexists(new_node->key)!=NULL)
			{
				cout<<"node alredy exits"<<endl;
			}
			else
			{
				if(ptr->next==head)
				{
					new_node->next=head;
					ptr->next=new_node;
				    cout<<"node inserted at end"<<endl;
				}
				else
				{
					new_node->next=ptr->next;
					ptr->next=new_node;
					cout<<"node inserted at middle"<<endl;
				}
			}
		}
	}
	void deletenode(int k)
	{
		Node *ptr=nodeexists(k);
		if(ptr==NULL)
		{
			cout<<"node doesn't exits"<<endl;
		}
		else
		{
			if(ptr==head)
			{
				if(head->next==NULL)
				{
					head=NULL;
					cout<<"object is at head and deleted"<<endl;
				}
				else
				{
					Node *ptr1=head;
					while(ptr1->next!=head)
				    {
				    	ptr1=ptr1->next;
					}
					ptr1->next=head->next;
					head=head->next;
					cout<<"deleted at head"<<endl;
				}
			}
			else{
				Node* temp=NULL;
				Node *pre=head;
				Node *curr=head->next;
				while(curr!=NULL)
				{
					if(curr->key==k)
					{
						temp=curr;
						curr=NULL;
					}
					else
					{
						pre=pre->next;
						curr=curr->next;
					}
				}
				pre->next=temp->next;
				temp->next=NULL;
				cout<<"node deleted"<<endl;
			}
		}
	}
	void updatenode(int k,int d)
	{
		Node *ptr=nodeexists(k);
		if(ptr==NULL)
		{
			cout<<"node doesn't exit"<<endl;
		}
		else
		{
			ptr->data=d;
		}
	}
	void print()
	{
		if(head==NULL)
		{
			cout<<"empty"<<endl;
		}
		else
		{
			cout<<endl<<"head address"<<head<<endl;
			cout<<"singly linked list values:"<<endl;
			Node *temp=head;
			do{
			cout<<"("<<temp->key<<","<<temp->data<<","<<temp->next<<")--->";
			temp=temp->next;
		   }while(temp!=head);
			
		}
	}
	
};
int main()
{
	Circular obj;
  int option;
  int key1, k1, data1;
  do {
    cout << "\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. appendNode()" << endl;
    cout << "2. prependNode()" << endl;
    cout << "3. insertNodeAfter()" << endl;
    cout << "4. deleteNodeByKey()" << endl;
    cout << "5. updateNodeByKey()" << endl;
    cout << "6. print()" << endl;
    cout << "7. Clear Screen" << endl << endl;

    cin >> option;
    Node * n1 = new Node();
    //Node n1;

    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Append Node Operation \nEnter key & data of the Node to be Appended" << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;
      obj.append(n1);
      //cout<<n1.key<<" = "<<n1.data<<endl;
      break;

    case 2:
      cout << "Prepend Node Operation \nEnter key & data of the Node to be Prepended" << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;
      obj.prepend(n1);
      break;

    case 3:
      cout << "Insert Node After Operation \nEnter key of existing Node after which you want to Insert this New node: " << endl;
      cin >> k1;
      cout << "Enter key & data of the New Node first: " << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;

      obj.nodeafter(k1, n1);
      break;

    case 4:

      cout << "Delete Node By Key Operation - \nEnter key of the Node to be deleted: " << endl;
      cin >> k1;
      obj.deletenode(k1);

      break;
    case 5:
      cout << "Update Node By Key Operation - \nEnter key & NEW data to be updated" << endl;
      cin >> key1;
      cin >> data1;
      obj.updatenode(key1, data1);

      break;
    case 6:
      obj.print();

      break;
    case 7:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);

  return 0;
}
