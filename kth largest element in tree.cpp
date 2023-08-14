#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *left,*right;
};

Node* newNode(int d)
{
	Node *temp=new Node;
	 temp->data=d;
	 temp->left=NULL;
	 temp->right=NULL;
	 return temp;
}

Node* kLargest(Node *root,int k)
{
	Node *kLargest=NULL;
	Node *curr=root;
	int count=0;
	while(curr!=NULL)
	{
		if(curr->right==NULL)
		{
			if(++count==k)
			{
				kLargest=curr;
				return kLargest;
			}
			curr=curr->left;
		}
		else{
			Node *succ=curr->right;
			while(succ->left!=NULL&&succ->left!=curr)
			{
				succ=succ->left;
			}
		   if(succ->left==NULL)
		   {
		   	  succ->left=curr;
		   	  curr=curr->right;
		   }
		   else
		   {
		   	if(++count==k)
		   	{
		   		kLargest=curr;
		   		return kLargest;
			}
			curr=curr->left;
			succ->left=NULL;
		   }

			
		}
	}
}


int main()
{
	Node *root=newNode(4);
	root->left=newNode(2);
	root->right=newNode(7);
	root->left->left=newNode(1);
	root->left->right=newNode(3);
	root->right->left=newNode(6);
	root->right->right=newNode(10);
	cout<<"enter which largest number you want::"<<endl;
	int k;
	cin>>k;
	
	cout<<"KLARGEST ELEMENT IS::"<<kLargest(root,k)->data;
	return 0;
}

