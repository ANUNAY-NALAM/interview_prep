#include<bits/stdc++.h>

using namespace std;
class stac{
	public:
		stack<int> st;
		bool isempty()
		{
			return st.empty();
		}
		void push(int data)
		{
			st.push(data);
		}
		void pop()
		{
			st.pop();
		}
		int top()
		{
		    return st.top();
		}
		int size()
		{
			return st.size();
		}
};
int main()
{
	stac obj;
	while(1)
	{
    cout<<"select your choice:"<<endl;
    cout<<"1.push"<<endl;
    cout<<"2.pop"<<endl;
    cout<<"3.top"<<endl;
    cout<<"4.size"<<endl;
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
		    obj.top();
			break;
	    case 4:
		    obj.size() ;
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
