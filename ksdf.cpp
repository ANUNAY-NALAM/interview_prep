#include<bits/stdc++.h>
using namespace std;

class Stack
{
  int top;
  int *arr;
  int *dup;
  int top2;
  int capacity;
  public:
  Stack(int capacity)
  {
    top=-1;
    arr[]=new int[capacity];
    dup[]=new int[capacity];
    top2=-1;
  }
  void push(int data)
  {
    top++;
    arr[top]=data;
    if(top2==-1||dup[top2]>data)
    {
      top2++;
      dup[top2]=data;
    }
  }
  int peek()
  {
    if(top==-1)
    return -1;
    return arr[top];
  }
  void pop()
  {
    if(top==-1)
    return;
    if(arr[top]==dup[top2])
    {
      top--;
      top2--;
    }
    else
    {
      top--;
    }
  }
  int minimumelement()
  {
    if(top2==-1)
    return -1;
    return dup[top2];
  }
};
int main()
{
  
  int t;
  cin>>t;
  Stack obj(t);
  while(t--)
  {
    int n;
    cin>>n;
    if(n==3)
    {
      //print top element if empty print -1;
      cout<<obj.top()<<endl;
    }
    else if(n==4)
    {
      //print minimum eleemnt if em print -1;
      cout<<obj.minimumelement()<<endl;
    }
    else if(n==2)
    {
      //pop element if stack empty print -1;
      if(obj.peek()==-1)
      cout<<-1<<endl;
      else
      obj.pop();
    }
    else
    {
      //remove 1 and push remaining;
      n=n%10;
      obj.push(n);
    }
  }
  return 0;
}
