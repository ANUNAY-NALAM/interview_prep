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
void inOrder(Node* root)
{
    stack<Node*> st;
    Node* cur=root;
    while(!st.empty()||cur!=NULL)
    {
    	if(cur!=NULL)
    	{
    		st.push(cur);
    		cur=cur->left;
		}
		else
		{
			cur=st.top();
			st.pop();
			cout<<cur->data<<" ";
			cur=cur->right;
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
	inOrder(root);
	return 0;
}
