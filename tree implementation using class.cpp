#include<iostream>
using namespace std;
class Node{
	public:
	int val;
	Node* left;
	Node* right;
	
	  Node(){
	  	val=0;
	  	left=NULL;
	  	right=NULL;
	  }
	  Node(int v)
	  {
	  	val=v;
	  	left=NULL;
	    right=NULL;
	  }
};
class Tree{
	public:
	Node* root;
	
		Tree()
		{
		   root=NULL;
		}
		bool is_empty()
		{
			if(root==NULL)
			return true;
			else
			return false;
		}
		void insert_Node(Node* new_node)
		{
			if(root==NULL)
			{
				root=new_node;
				cout<<"Node inserted at begining of root"<<endl;
			}
			else
			{
				Node *temp=root;
				while(temp!=NULL)
				{
				
				if(temp->val==new_node->val)
				{
				
					cout<<"value already present duplicate's are not allowed"<<endl;
					break;
				}
				
				else if(temp->val>new_node->val&&temp->left==NULL)
				{
					temp->left=new_node;
					cout<<"Node inserted"<<endl;
					break;
				}
				else if(temp->val>new_node->val)
				{
					temp=temp->left;
				}
				else if(temp->val<new_node->val&&temp->right==NULL)
				{
					temp->right=new_node;
					cout<<"Node inserted"<<endl;
					break;
				}
				else 
				{
					temp=temp->right;
				}
				
			   }
			}
		}
		Node* insertRecur(Node*r,Node* new_node)
		{
			if(r==NULL)
			{
				r=new_node;
				cout<<"insertion successfull"<<endl;
				return r;
			}
			if(r->val>new_node->val)
			{
				r->left=insertRecur(r->left,new_node);
			}
			else  if(r->val<new_node->val)
			{
				r->right=insertRecur(r->right,new_node);
			}
			else
			{
				cout<<"Node already present better luck next time"<<endl;
				return r;
			}
			return r;
		}
		void preorder(Node * r)
		{
			if(r==NULL)
			{
				return ;
			}
			cout<<r->val<<"->";
			preorder(r->left);
			preorder(r->right);
		}
		void inorder(Node *r)
		{
			if(r==NULL)
			{
				return ;
			}
		    inorder(r->left);
		    cout<<r->val<<"->";
		    inorder(r->right);
		}
		void postorder(Node* r)
		{
			if(r==NULL)
			{
				return ;
			}
			postorder(r->left);
			postorder(r->right);
			cout<<r->val<<"->";
		}
		Node* iterative(int data)
		{
			if(root==NULL)
			{
				return root;
			}
			else 
			{
				Node *temp=root;
				while(temp!=NULL)
				{
				if(temp->val==data)
				{
					return temp;
				}
				else if(temp->val>data)
				{
					temp=temp->left;
				}
				else 
				{
					temp=temp->right;
				}
			
			}
			return NULL;
			}
		}
		Node * Recur_search(Node* r,int data)
		{
			if(r==NULL||r->val==data)
			{
				return r;
			}
			else if(r->val>data)
			{
				return Recur_search(r->left,data);
			}
			else 
			{
				return Recur_search(r->right,data);
			}
			
		}
		int height(Node* r)
		{
			if(r==NULL)
			{
				return -1;
			}
			int lheight=height(r->left);
			int rheight=height(r->right);
			if(lheight>rheight)
			{
				return lheight+1;
			}
			else
			{
				return rheight+1;
			}
		}
		void printGivenlevel(Node*r, int level )
		{
			if(r==NULL)
			{
				return ;
			}
			else if(level==0)
			{
				cout<<r->val<<" ";
			}
			else
			{
			printGivenlevel(r->left,level-1);
			printGivenlevel(r->right,level-1);
		    }
		}
		void printlevelorderBfs(Node *r)
		{
			int h=height(r);
			for(int i=0;i<=h;++i)
			{
			printGivenlevel(r,i);
		   }
		}
		Node* minvalueNode(Node* r)
		{
			Node* temp=r;
			while(temp->left!=NULL)
			{
				temp=temp->left;
			}
			return temp;
		}
		Node* deleteNode(Node* r,int v)
		{
			if(r==NULL)
			{
				return NULL;
			}
			else if (v < r -> val) {
            r -> left = deleteNode(r -> left, v);
            }
     
            else if (v > r -> val) {
            r -> right = deleteNode(r -> right, v);
            }
			else
			{
				if (r -> left == NULL) {
                Node * temp = r -> right;
                delete r;
                return temp;
            } else if (r -> right == NULL) {
               Node * temp = r -> left;
               delete r;
                return temp;
            } else {
            Node * temp = minvalueNode(r -> right);
            r -> val = temp -> val;
		    r -> right = deleteNode(r -> right, temp -> val);
			}
		}}
	};

  int main() {
  Tree obj;
  int option, v;

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
    Node * new_node = new Node();

    switch (option) {
    case 0:
      break;
    case 1:
      	cout <<"INSERT"<<endl;
	      cout <<"Enter VALUE of TREE NODE to INSERT in BST: ";
	      cin >> v;
	      new_node->val = v;
	      obj.root= obj.insertRecur(obj.root,new_node);
	      //obj.insertNode(new_node);
	      cout<<endl;
    		break;
      
    case 2:
      cout << "SEARCH" << endl;
      cout << "Enter VALUE of TREE NODE to SEARCH in BST: ";
      cin >> v;
      //new_node = obj.iterativeSearch(val);
      new_node = obj.Recur_search(obj.root, v);
      if (new_node != NULL) {
        cout << "Value found" << endl;
      } else {
        cout << "Value NOT found" << endl;
      }
      break;
    case 3:
      cout << "DELETE" << endl;
      cout << "Enter VALUE of TREE NODE to DELETE in BST: ";
      cin >> v;
      new_node = obj.iterative(v);
      if (new_node != NULL) {
        obj.deleteNode(obj.root, v);
        cout << "Value Deleted" << endl;
      } else {
        cout << "Value NOT found" << endl;
      }
      break;
    case 4:
      
      cout << "Print Level Order BFS: \n";
      obj.printlevelorderBfs(obj.root);
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
  };
