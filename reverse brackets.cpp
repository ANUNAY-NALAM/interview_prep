#include<iostream>
#include<string.h>
using namespace std;

int countRev (string s)
{
    // your code here
    int len=s.length();
    int stack[100];
    int count=0,flag=0;
    if(len%2!=0)
    {
        return -1;
    }
    
    for(int i=0;i<len;++i)
    {
        if(s[i]=='}'&&flag==0)
        {
            count++;
            flag++;
        }
        else if(s[i]=='}'&&flag!=0)
        {
            flag--;
        }
        else if(s[i]=='{'&&flag<(len-i))
        {
            flag++;
        }
        else if(s[i]=='{'&&flag==(len-i))
        {
            count++;
            flag--;
        }
    }
    
    return count;
}
int main()
{
	string s="}{{}}{{{";
	cout<<countRev(s)<<endl;
	return 0;
}
