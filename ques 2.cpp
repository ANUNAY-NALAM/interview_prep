#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1,str2;
    cin>>str1;
    cin>>str2;
    string temp;
    temp=str1+str1;
    if(str1.length()!=str2.length())
    {
    	cout<<"not a rotation"<<endl;
	}
	else if(temp.find(str2))
	{
		cout<<"its rotation"<<endl;
	}
	else
	{
		cout<<"not a rotation"<<endl;
	}
	return 0;
}

