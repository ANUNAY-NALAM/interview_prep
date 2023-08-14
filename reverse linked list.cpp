#include<iostream>
using namespace std;
 class Node { 
     public:
        int data; 
        Node *next; 
  
        Node(int d) 
        { 
            data = d; 
            next = NULL; 
        } 
    } ;
class LinkedList { 
   public:
     Node *head; 
     
     
  

    Node* reverse() 
    { 
      Node *n=NULL;
      Node *cur=head;
      Node *prev=NULL;
       while(cur!=NULL)
       {
       	  n=cur->next;
       	  cur->next=prev;
       	  prev=cur;
       	  cur=n;
	   }
	   head=prev;
	   return head;
    } 
  
    // prints content of double linked list 
    void printList(Node* n) 
    { 
        while (n !=NULL) { 
            cout<<(n->data + " "); 
            n = n->next; 
        } 
    } 
};
  
    int main() 
    { 
        LinkedList list ;
        Node * newNode = new Node();
        
        list.head = new Node(85); 
        list.head->next = newNode(15); 
        list.head->next->next = newNode(4); 
        list.head->next->next->next = newNode(20); 
  
        cout<<("Given Linked list"); 
        list.printList(list.head); 
        list.head = list.reverse(head); 
        cout<<(""); 
        cout<<("Reversed linked list "); 
        list.printList(list.head); 
    } 

