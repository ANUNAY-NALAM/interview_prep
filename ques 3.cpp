#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1;
	cin>>str1;
	string str2;
	cin>>str2;
	string res;
	cin>>res;
	if(res.length()!=str1.length()+str2.length())
	{
		cout<<"in valid shuffle";
	}
	else
	{
		int i=0,j=0,k=0;
		while(k<res.length())
		{
			if(i<str1.length()&&str1.at(i)==res.at(k))
			{
				++i;
				++k;
			}
			else if(j<str2.length()&&str2.at(j)==res.at(k))
			{
				++j;
				++k;
			}
			else
			{
				cout<<"invalid shuffle"<<endl;
				return 0;
			}
			
		}
		if(k==res.length())
		{
			cout<<"valid shuffle"<<endl;
		}
		
	}
	return 0;
}
