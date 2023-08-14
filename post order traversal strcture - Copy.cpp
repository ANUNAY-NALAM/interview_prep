#include<iostream>
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
}
Node* postOrderTraversal(Node* node)
{
	if(node!=NULL)
	{
		postOrderTraversal(node->left);
		postOrderTraversal(node->right);
		cout<<node->data<<" ";
	}
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
	postOrderTraversal(root);
	return 0;
}
