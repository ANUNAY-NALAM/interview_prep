#include<bits/stdc++.h>
using namespace std;
struct Node{
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
void preOrder(Node* root)
{
	if(root==NULL)
	return;
	stack<Node*> st;
	st.push(root);
	while(!st.empty())
	{
		Node* curr=st.top();
		st.pop();
		cout<<curr->data<<" ";
		if(curr->right)
		{
			st.push(curr->right);
		}
		if(curr->left)
		{
			st.push(curr->left);
		}
		
	}
	
}
int main()
{
	root=createNode(1);
	root->left=createNode(2);
	root->right=createNode(3);
	root->left->left=createNode(4);
	root->left->right=createNode(5);
	root->right->left=createNode(6);
	root->right->right=createNode(7);
	preOrder(root);
	return 0;
}
