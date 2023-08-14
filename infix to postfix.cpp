#include<iostream>
using namespace std;

class Stack{
	char *arr;
	int top;
	int capacity;
  public:
  	Stack()
  	{
  		this->capacity=1000000;
  		arr=new char[capacity];
  		top=-1;
	}
	int size()
	{
		return top+1;
	}
	bool isempty()
	{
		return top==-1;
	}
	bool isfull()
	{
		return top+1==capacity;
	}
	void push(char data)
	{
		if(isfull())
		{
			cout<<"stack is full"<<endl;
			return;
		}
		top=top+1;
		arr[top]=data;
	}
	char pop()
	{
		if(isempty())
		{
			cout<<"stack is empty"<<endl;
			return -1;
		}
		
		return arr[top--];
	}
	char peek()
	{
		if(isempty())
		{
			cout<<"stack is empty"<<endl;
			return -1;
		}
		return arr[top];
	}
	
};
int prec(char c)
	{
		if(c=='^')
		{
			return 3;
		}
		else if(c=='*'||c=='/')
		{
			return 2;
		}
		else if(c=='-'||c=='+')
		{
			return 1;
		}
		else
		{
			return -1;
		}
		
	}
void infixtopostfix(string s)
{
	Stack st;
	st.push('#');
	int l=s.length();
	string ns;
	for(int i=0;i<l;++i)
	{
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
		{
			ns=ns+s[i];
		}
		else if(s[i]=='(')
		{
			st.push('(');
		}
		else if(s[i]==')')
		{
			while(st.peek()!='#'&&st.peek()!='(')
			{
				char c=st.pop();
				ns+=c;
			}
			if(st.peek()=='(')
			{
				st.pop();
			}
		}
		else
		{
			while(st.peek()!='#'&& prec(s[i])<prec(st.peek()))
			{
				char c=st.pop();
				ns+=c;
			}
			st.push(s[i]);
		}
	}
	while(st.peek()!='#')
	{
		char c=st.pop();
		ns+=c;
	}
	cout<<"ns::::"<<ns<<endl;
}
int main()
{
	int t;
	cin>>t;
	string s;
	while(t--)
	{
		cin>>s;
		infixtopostfix(s);
	}
	return 0;
}
