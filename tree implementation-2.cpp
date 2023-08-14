#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node()
    {
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
    Node * root;
    BST(){
        root=NULL;
    }
    bool isEmpty(Node* root)
    {
        if(root==NULL)
        {
            return  true;
        }
        else
        {
            return false;
        }
    }
    void insertNode(Node *new_node)
    {
        if(isEmpty(root))
        {
            root=new_node;
            cout<<"Node has inserted at his root by iterative method"<<endl;
        }
        else
        {
            Node *temp=root;
            while(temp!=NULL)
            {
               if(temp->data==new_node->data)
               {
                   cout<<"this value is already inserted can you think anything new"<<endl;
               }
               else if(temp->left==NULL && temp->data>new_node->data)
               {
                 temp->left= new_node;
                 cout<<"node is inserted by iterative  method"<<endl;
               }
               else if(temp->data>new_node->data)
               {
                   temp=temp->left;
               }
               else if(temp->right==NULL && temp->data<new_node->data)
               {
                 temp->right= new_node;
                 cout<<"node is inserted by iterative method"<<endl;
               }
               else if(temp->data<new_node->data)
               {
                   temp=temp->right;
               }
            }
        }
    }
    void insertRecur(Node * new_node,Node *r)
    {
        if(r==NULL)
        {
              r=new_node;
              cout<<"Node inserted by recursive mehod"<<endl;
        }
        else if(r->data>new_node->data)
        {
              insertRecur(new_node,r->left);
        }
        else if(r->data<new_node->data)
        {
              insertRecur(new_node,r->right);
        }
        else
        {
            cout<<"Node already exists plese get lost"<<endl;
        }

    }
    Node* preorder(Node * r)
    {
        cout<<r->data<<"-->";
        preorder(r->left);
        preorder(r->right);
    }
    Node* inorder(Node *r)
    {
        inorder(r->left);
        cout<<r->data<<"-->";
        inorder(r->right);
    }
    Node* postorder(Node *r)
    {
        postorder(r->left);
        postorder(r->right);
        cout<<r->data<<"-->";
    }
    Node* iterativeSearch(int v)
    {
        Node* temp=root;
        while(temp!=NULL)
        {
            if(temp->data==v)
            {
                cout<<"found by iterative search"<<endl;
                return temp;
            }
            else if(temp->data>v)
            {
                temp=temp->left;
            }
            else
            {
                temp=temp->right;
            }
        }
        cout<<"value not found"<<endl;
        return NULL;
    }
    Node* recur(int v,Node * r)
    {
          if(r->data==v)
          {
              cout<<"value found by recursive search"<<endl;
          }
          else if(r->data>v)
          {
              recur(v,r->left);
          }
          else if(r->data<v){
             recur(v,r->right);
          }
          else
          {
              cout<<"value not found fuck off"<<endl;
          }
    }
    int height(Node* r)
    {
        if(r==NULL)
        return -1;
        else{
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

    }
    Node* printGivenLevel(Node *r,int level)
    {
        if(r==NULL)
        return r;
        else if(level==0)
        {
            cout<<r->data<<",,";
        }
        else
        {
            printGivenLevel(r->left,level-1);
            printGivenLevel(r->right,level-1);
        }
    }
    Node* levelOrderBFS(Node *r)
    {
        int h=height(r);
        for(int i=0;i<h;++i)
        {
            printGivenLevel(r,h);
            cout<<endl;
        }
    }
    Node* minvalue(Node* r)
    {
        Node* cur=root;
        while(cur->left!=NULL)
        {
            cur=cur->left;
        }
        cout<<"min value is "<<cur->data<<endl;
    }
    Node* deleteNode(Node *r,int v)
    {
        if(r==NULL)
        return r;
        else if(r->data>v)
        {
            deleteNode(r->left,v);
        }
        else if(r->data<v)
        {
            deleteNode(r->right,v);
        }
        else
        {
            Node *temp=r;
            if(r->left==NULL )
            {
                Node* temp=r->right;
                delete r;
                return temp;
            }
            else if(r->right==NULL)
            {
                Node* temp=r->left;
                delete r;
                return temp;
            }
            else
            {
               Node* temp= minvalue(r->right);
               r->data=temp->data;
               deleteNode(r->right,temp->data);
            }
        }
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

};
int main(){
    BST obj;
    int option,val;
    do{
    cout << "What operation do you want to perform? " <<" Select Option number. Enter 0 to exit." << endl;
    cout << "1. Insert Node" << endl;
    cout << "2. Search Node" << endl;
    cout << "3. Delete Node" << endl;
    cout << "4. Print/Traversal BST values" << endl;
    cout << "5. Height of Tree" << endl;
    cout << "6. Clear Screen" << endl;
    cout << "0. Exit Program" << endl;
    cin>>option;
    Node * new_node= new Node();
    switch(option)
    {
        case 1:
           cout<<"enter the value of the node you wanted to insert"<<endl;
           cin>>new_node->data;

           obj.insertRecur(new_node,obj.root);
           break;
        case 2:
           cout<<"enter the value to search"<<endl;
           cin>>val;
           obj.iterativeSearch(val);
           break;
        case 3:
           cout<<"enter the value to delete"<<endl;
           cin>>val;
           obj.deleteNode(obj.root,val);
           break;
        case 4:
           cout<<"preorder print:::"<<endl;
           obj.preorder(obj.root);
           cout<<"inorder print:::"<<endl;
           obj.inorder(obj.root);
           cout<<"postorder print:::"<<endl;
           obj.postorder(obj.root);
           break;
        case 5:
           cout<<"print traversal bst values"<<endl;
           obj.levelOrderBFS(obj.root);
           break;
        case 6:
           cout<<"height"<<endl;
           obj.height(obj.root);
           break;
        case 7:
        system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;         
                 

    }

    }while(1);


}