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
void postOrder(Node* root)
{
	stack<Node*> st;
	st.push(root);
    stack<int> out;
    while(!st.empty())
    {
    	Node* cur=st.top();
    	st.pop();
    	out.push(cur->data);
    	if(cur->left)
    	{
    		st.push(cur->left);
		}
		if(cur->right)
		{
			st.push(cur->right);
		}
	}
	while(!out.empty())
	{
		cout<<out.top()<<" ";
		out.pop();
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
	postOrder(root);
	return 0;
}
