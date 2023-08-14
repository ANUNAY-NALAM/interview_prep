#include<bits/stdc++.h>
using namespace std;

typedef struct Node{
	int data;
	Node* left;
	Node* right;
};
Node* root=NULL;
Node* createNode(int data)
{
	Node* new_Node=(Node*)malloc(sizeof(Node));
	new_Node->data=data;
	new_Node->left=NULL;
	new_Node->right=NULL;
	return new_Node;
}
       void preOrderTraversal(Node* node)
		{
			if(node!=NULL)
			{
				cout<<node->data<<" ";
				preOrderTraversal(node->left);
				preOrderTraversal(node->right);
			}
		}
		void inOrderTraversal(Node* node)
		{
			if(node!=NULL)
			{
				
				inOrderTraversal(node->left);
				cout<<node->data<<" ";
				inOrderTraversal(node->right);
			}
		}
		void postOrderTraversal(Node* node)
		{
			if(node!=NULL)
			{
				
				postOrderTraversal(node->left);
				postOrderTraversal(node->right);
				cout<<node->data<<" ";
			}
		}

void levelOrderTraversal(Node *node)
{
	if(node==NULL)
	{
		return;
	}
	queue<Node*> qnode;
	qnode.push(node);
	while(!qnode.empty())
	{
		Node* temp=qnode.front();
		qnode.pop();
		cout<<temp->data<<" ";
		if(temp->left!=NULL)
		{
			qnode.push(temp->left);
		}
		if(temp->right!=NULL)
		{
			qnode.push(temp->right);
		}
	}
}
int maxHeight(Node * node)
{
	if(node==NULL)
	{
		return 0;
	}
	int l= maxHeight(node->left);
	int r=maxHeight(node->right);
	return max(l,r)+1;
}
int size(Node* node)
{
	if(node==NULL)
	{
		return 0;
	}
	else
	 return (size(node->left)+size(node->right)+1);
}
int main()
{
	root=createNode(5);
	root->left=createNode(6);
	root->right=createNode(7);
	root->left->left=createNode(8);
	root->left->right=createNode(9);
	root->right->left=createNode(10);
	root->right->right=createNode(11);
	cout<<"PreOrder traversal is:\n";
	preOrderTraversal(root);
	cout<<"inOrder traversal is:\n";
	inOrderTraversal(root);
	cout<<"PostOrder traversal is:\n";
	postOrderTraversal(root);
	cout<<"levelOrder traversal is:" <<endl;
	levelOrderTraversal(root);
	cout<<"max height:"<<maxHeight(root)<<endl;
	cout<<"size:"<<size(root)<<endl;
	return 0;
	
}
