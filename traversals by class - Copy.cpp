#include<bits/stdc++.h>
using namespace std;
class Node
{
	public:
		int data;
		Node *left,*right;
		Node(int data)
		{
			this->data=data;
			left=NULL;
			right=NULL;
		}
};
class BinaryTree
{
	public:
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
		
};
int main()
{
	BinaryTree bt;
	Node *root=NULL;
	root=new Node(5);
	root->left=new Node(6);
	root->right= new Node(7);
	root->left->left=new Node(8);
	root->left->right=new Node(9);
	root->right->left=new Node(10);
	root->right->right=new Node(11);
	cout<<"PreOrder traversal is:\n";
	bt.preOrderTraversal(root);
	cout<<"inOrder traversal is:\n";
	bt.inOrderTraversal(root);
	cout<<"PostOrder traversal is:\n";
	bt.postOrderTraversal(root);
	cout<<"levelOrder traversal is:" <<endl;
	bt.levelOrderTraversal(root);
	cout<<"max height:"<<bt.maxHeight(root)<<endl;
	cout<<"size:"<<bt.size(root)<<endl;
	return 0;
}

