#include<iostream>
using namespace std;
typedef struct Node
{
	int data;
	Node* left;
	Node* right;
};
Node *root=NULL;
Node* createNode(int data)
{
	Node* newNode =(Node*) malloc(sizeof(Node));
	newNode->data=data;
	newNode->left=NULL;
	newNode->right=NULL;
}
void preOrderTraversal(Node * node)
{
	if(node!=NULL)
	{
		cout<<node->data<<" ";
		preOrderTraversal(node->left);
		preOrderTraversal(node->right);
	}
}
int main()
{
	root=createNode(5);
	root->left=createNode(6);
	root->right=createNode(7);
	root->left->left=createNode(4);
	root->left->right=createNode(3);
	root->right->left=createNode(2);
	cout<<"preorder traversal="<<"\n";
	preOrderTraversal(root);
	return 0;
}
