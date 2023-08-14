#include<iostream>
#include<string>
using namespace std;

class stack{
	private:
		int top,capacity;
		int size;
		int* arr;
	public:
		stack(int capacity)
		{
			top=-1;
			this->capacity=capacity;
			size=0;
			arr=new int[capacity];
		}
		int isempty()
		{
			return top==-1;
		}
		int isfull()
		{
			return top==capacity-1;
		}
		void push(int data)
		{
			if(isfull())
			{
				cout<<"stack is full"<<endl;
				return;
			}
			top++;
			arr[top]=data;
			++size;
		}
		void pop()
		{
			if(isempty())
			{
				cout<<"stack is empty"<<endl;
				return;
			}
			--size;
			top--;
		}
		void get_top()
		{
			cout<<arr[top]<<endl;
		}
		void display()
		{
			for(int i=0;i<size;++i)
		    {
		    	cout<<arr[i]<<" ";
			}
			cout<<endl;
	    }
};
int main()
{
	int capacity;
	cin>>capacity;
	stack obj(capacity);
	while(1)
	{
    cout<<"select your choice:"<<endl;
    cout<<"1.push"<<endl;
    cout<<"2.pop"<<endl;
    cout<<"3.top"<<endl;
    cout<<"4.display"<<endl;
    int k;
    cin>>k;
    switch(k)
    {
    	case 1:
    		int data;
    		cin>>data;
    		obj.push(data);
    		break;
    	case 2:
		    obj.pop();
		    break;
		case 3:
		    obj.get_top();
			break;
	    case 4:
		    obj.display() ;
			break;
		case 5:
			exit(0);
			break;
		default:
		   cout<<"go to lenskart"<<endl;	   
	}
    }
	return 0;
}
