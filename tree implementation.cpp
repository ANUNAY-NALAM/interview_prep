#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *left;
		Node *right;
	
	Node(){
		data=0;
		left=NULL;
		right=NULL;
	}
	Node(int d)
	{
		data=d;
		left=NULL;
		right=NULL;
    }	
};

class BST{
	public:
	Node *root;
	BST()
	{
		root=NULL;
	}
	isEmpty()
	{
		if(root=NULL)
		return true;
		else
		return false;
	}
	void insertNode(Node *newNode)
	{
		if(root=NULL)
		{
			root=newNode;
			cout<<"value inserted as a root"<<endl;
		}
		else
		{
			Node *temp=root;
			if(temp->data==newNode->data){
				cout<<"Node already exists with this value"<<endl;
			}
			if(temp->data<newNode->data&&temp->left==NULL)
			{
				temp->left=newNode;
				cout<<"value inserted into the left"<<endl;
			}
			else if(temp->left!=NULL)
			{
				temp=temp->left;
			}
			else if(temp->data>newNode->data&&temp->right==NULL)
			{
				temp->right=newNode;
				cout<<"valur inserted at the right"<<endl;
			}
			else
			{
				temp=temp->right;
			}
		}
	}
	Node * insertRecur(Node *r,Node *newNode)
	{
		if(r==NULL)
		{
			r=newNode;
			cout<<"by recursive method node inserted"<<endl;
			return r;
		}
		else if(newNode->data<r->data)
		{
			r->left=insertRecur(r->left,newNode);
		}
		else if(newNode->data>r->data)
		{
			r->right=insertRecur(r->right,newNode);
		}
		else 
		{
			cout<<"No thanks data already present "<<endl;
			return r;
		}
		return r;
		
	}
	void printPreorder(Node *r)
	{
		if(r==NULL)
		return;
		cout<<r->data<<"->";
		printPreorder(r->left);
		printPreorder(r->right);
	}
	void printIn(Node *r)
	{
		if(r==NULL)
		return;
		printIn(r->left);
		cout<<r->data<<"->";
		printIn(r->right);
	}
	void printPost(Node *r)
	{
		if(r==NULL)
		return;
		printPost(r->left);
		printPost(r->right);
		cout<<r->data<<"->";
	}
	Node* iterativeSearch(int v)
	{
		Node *temp=root;
		if(temp==NULL)
		return temp;
		while(temp!=NULL)
		{
			if(temp->data==v)
			{
				return temp;
			}
			else if(temp->data>v)
			{
				temp=temp->left;
			}
			else if(temp->data<v)
			{
				temp=temp->right;
			}
		}
		return NULL;
	}
	Node* recursiveSearch(Node *r,int v)
	{
		if(r==NULL||r->data==v)
		return r;
		else if(r->data>v)
		{
			return recursiveSearch(r->left,v);
		}
		else if(r->data<v)
		{
			return recursiveSearch(r->right,v);
		}
	}
	int height(Node *r)
	{
		
		if(r==NULL)
		return -1;
		else
		{
		int lheight=height(r->left);
		int rheight=height(r->right);
	     
		if(lheight>rheight)
		return (lheight+1);
		else
		return (rheight+1);
	    }
	}
	Node* printGivenLevel(Node *r,int level)
	{
		if(r==NULL)
		return r;
		else if(level==0)
		{
			cout<<r->data<<" ";
		}
		else
		{
			printGivenLevel(r->left,level-1);
			printGivenLevel(r->right,level-1);
		}
		
	}
	Node *printLevelOrderBFS(Node *r)
	{
		if (r==NULL)
		return r;
		cout<<r->data<<" "<<endl;

		printLevelOrderBFS(r->left);
		printLevelOrderBFS(r->right);
	    
		
	}
	Node* minValue(Node *r)
	{
		Node *current=root;
		while(current->left!=NULL)
		{
			current=current->left;
		}
		return current;
		
	}
	 void print2D(Node * r, int space) {
    if (r == NULL) // Base case  1
      return;
      int SPACE=0;
    space += SPACE; // Increase distance between levels   2
    print2D(r -> right, space); // Process right child first 3 
    cout << endl;
    for (int i = SPACE; i < space; i++) // 5 
      cout << " "; // 5.1  
    cout << r -> data << "\n"; // 6
    print2D(r -> left, space); // Process left child  7
  }
	Node* deleteNode(Node *r,int v)
	{
		if(r==NULL)
		return NULL;
		else if(r->data>v)
		{
			r->left= deleteNode(r->left,v);
		}
		else if(r->data<v)
		{
			r->right=deleteNode(r->right,v);
		}
		else{
			Node *temp=minValue(r->right);
			r->data=temp->data;
			deleteNode(r->right,temp->data);
		}
	}
	
	

};

int main(){
	  BST obj;
  int option, val;

  do {
    cout << "What operation do you want to perform? " <<
      " Select Option number. Enter 0 to exit." << endl;
    cout << "1. Insert Node" << endl;
    cout << "2. Search Node" << endl;
    cout << "3. Delete Node" << endl;
    cout << "4. Print/Traversal BST values" << endl;
    cout << "5. Height of Tree" << endl;
    cout << "6. Clear Screen" << endl;
    cout << "0. Exit Program" << endl;

    cin >> option;
    //Node n1;
    Node * newNode = new Node();

    switch (option) {
    case 0:
      break;
    case 1:
      	cout <<"INSERT"<<endl;
	      cout <<"Enter VALUE of TREE NODE to INSERT in BST: ";
	      cin >> val;
	      newNode->data = val;
	      obj.root= obj.insertRecur(obj.root,newNode);
	      //obj.insertNode(new_node);
	      cout<<endl;
    		break;
      
    case 2:
      cout << "SEARCH" << endl;
      cout << "Enter VALUE of TREE NODE to SEARCH in BST: ";
      cin >> val;
      //new_node = obj.iterativeSearch(val);
      newNode= obj.recursiveSearch(obj.root, val);
      if (newNode != NULL) {
        cout << "Value found" << endl;
      } else {
        cout << "Value NOT found" << endl;
      }
      break;
    case 3:
      cout << "DELETE" << endl;
      cout << "Enter VALUE of TREE NODE to DELETE in BST: ";
      cin >> val;
      newNode = obj.iterativeSearch(val);
      if (newNode != NULL) {
        obj.deleteNode(obj.root, val);
        cout << "Value Deleted" << endl;
      } else {
        cout << "Value NOT found" << endl;
      }
      break;
    case 4:
      cout << "PRINT 2D: " << endl;
      obj.print2D(obj.root, 5);
      cout << endl;
      cout << "Print Level Order BFS: \n";
      obj.printLevelOrderBFS(obj.root);
      cout << endl;
      //	      cout <<"PRE-ORDER: ";
      //	      obj.printPreorder(obj.root);
      //	      cout<<endl;
      //	      cout <<"IN-ORDER: ";
      //	      obj.printInorder(obj.root);
      //	      cout<<endl;
      //	      cout <<"POST-ORDER: ";
      //	      obj.printPostorder(obj.root);
      break;
    case 5:
      cout << "TREE HEIGHT" << endl;
      cout << "Height : " << obj.height(obj.root) << endl;
      break;
    case 6:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);

  return 0;
}
