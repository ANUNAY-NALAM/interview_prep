bool palindromeLlist(SinglyLinkedListNode *head)
{
//write your code here
  if(head==NULL||head->next==NULL)
  {
     return true;
  }
  else
  {
    SinglyLinkedListNode * tor=head;
    SinglyLinkedListNode * hare=head;
    SinglyLinkedListNode * temp1=head;
    SinglyLinkedListNode * temp2;
    while(hare->next!=NULL||hare->next->next!=NULL)
    {
      hare=hare->next->next;
      tor=tor->next;
    }
    temp2=tor->next;
    {
      if(temp2==NULL||temp2->next==NULL)
      {
         
      }
     else
     {
     SinglyLinkedListNode * temp=temp2;
     SinglyLinkedListNode * slow;
     SinglyLinkedListNode * fast;
     slow=temp2;
     fast=temp2->next;
     slow->next=NULL;
     while(fast!=NULL)
     {
       temp=fast->next;
        fast->next=slow;
        slow=fast;
        fast=temp;
     }
     tor->next=slow;
     }
    }
    slow=temp2;
    while(temp1!=NULL&&temp2!=NULL)
    {
      if(temp1->data!=temp2->data)
      return false;
      temp1=temp1->next;
      temp2=temp2->next;
      
    }
    return true;
  }
}