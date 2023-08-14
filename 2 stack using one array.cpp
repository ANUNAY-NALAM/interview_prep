//2 stacks using one array
#include<iostream>
using namespace std;
class Stack{
	int top1;
	int top2;
	int capacity;
	int *arr;
  public:
  	Stack(int capacity)
  	{
  		this->capacity=capacity;
  		top1=-1;
  		top2=capacity;
  		arr= new int[capacity];
	}
	
	int leftout()
	{
		return(top2-top1-1);
	}
	void push1(int data)
	{
		if(leftout()==0)
		{
			cout<<"array is full"<<endl;
			return;
		}
		top1++;
		arr[top1]=data;
		
	}
	void push2(int data)
	{
		if(leftout()==0)
		{
			cout<<"array is full"<<endl;
			return;
		}
		top2--;
		arr[top2]=data;
	}
	void pop1()
	{
		top1--;
	}
	void pop2()
	{
		top2++;
	}
	void print()
	{
		for(int i=0;i<=top1;++i)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
		for(int i=capacity-1;i>=top2;--i)
		{
			cout<<arr[i]<<" ";
		}
	}
};
int main()
{
	int n;
	cout<<"enter no of elements:"<<endl;
	cin>>n;
	Stack obj(n);
	int a[n];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	while(1)
	{
	int p;
	cout<<"enter your choice"<<endl;
	cin>>p;
	
	switch(p)
	{
		case  1:
			cout<<"enter to push1"<<endl;
			int k;
			cin>> k;
			obj.push1(k);
			break;
		case 2:
		    cout<<"enter to push2"<<endl;
			int f;
			cin>>f;
			obj.push2(f);
			break;
	    case 3:
		    cout<<"pop1"<<endl;
			obj.pop1();
			break;
		case 4:
		    cout<<" pop2"<<endl;
			obj.pop2();
			break;
	    case 5:
		    cout<<"left out ones are:"<<endl;
			cout<<obj.leftout()<<endl;
			break;
		case 6:
		    cout<<"printing all"<<endl;
			obj.print();
			break;
		case 7:
		    exit(0);
			break;	
		default:
		    cout<<"sorry for incomplete code enter write ones:"<<endl;
	}
   }
	return 0;
}
