#include<bits/stdc++.h>
using namespace std;
typedef struct Node{
	int data;
	Node* left;
	Node* right;
};
Node* root=NULL;
Node* createNode(int key)
{
	Node* newNode=(Node*)malloc(sizeof(Node));
	newNode->data=key;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}
       void preOrder(Node* node)
		{
			if(node!=NULL)
			{
				cout<<node->data<<" ";
				preOrder(node->left);
				preOrder(node->right);
			}
		}
		void inOrder(Node* node)
		{
			if(node!=NULL)
			{
				
				inOrder(node->left);
				cout<<node->data<<" ";
				inOrder(node->right);
			}
		}
		void postOrder(Node* node)
		{
			if(node!=NULL)
			{
				
				postOrder(node->left);
				postOrder(node->right);
				cout<<node->data<<" ";
			}
		}

void levelOrder(Node *node)
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
Node* insertNode(Node *node,int key)
{
	if(node==NULL)
	{
		node=createNode(key);
	}
	if(key<node->data)
	 node->left=insertNode(node->left,key);
	else if(key>node->data)
	 node->right=insertNode(node->right,key);
	 
	 return node;
}
void addNode(int key)
{
	root=insertNode(root,key);
}
Node* searchKey(Node* node,int key)
{
	if(node==NULL||node->data==key)
	{
		return node;
	}
	if(key<node->data)
	{
		return searchKey(node->left,key);
	}
	else
	{
		return searchKey(node->right,key);
	}
}

void search(int key)
{
	Node* node=searchKey(root,key);
	if(node!=NULL)
	{
		cout<<"Key"<<key<<"is found"<<endl;
	}
	else
	{
		cout<<"Key"<<key<<"is not found"<<endl;
	}
}

int minimumVal(Node* node)
{
	int minValue=node->data;
	while(node->left!=NULL)
	{
		minValue=node->left->data;
		node=node->left;
	}
	return minValue;
}
Node* deleteNodeRec(Node* node,int key)
{
	if(node==NULL)
	{
		return node;
	}
	if(key<node->data)
	{
		node->left=deleteNodeRec(node->left,key);
	}
	else if(key>node->data)
	{
		node->right=deleteNodeRec(node->right,key);
	}
	else
	{
		if(node->left==NULL)
		return node->right;
		else if(node->right==NULL)
		{
			return node->left;
		}
		node->data=minimumVal(node->right);
		node->right=deleteNodeRec(node->right,node->data);
	}
	return node;
}
void deleteNode(int key)
{
	root=deleteNodeRec(root,key);
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;++i)
	{
		int ele;
		cin>>ele;
		addNode(ele);
	}
	cout<<"PreOrder:"<<endl;
	preOrder(root);
	cout<<"Inorder:"<<endl;
	inOrder(root);
	cout<<"Post order:"<<endl;
	postOrder(root);
	cout<<"Search 25"<<endl;
	search(25);
	cout<<endl;
	return 0;
}
