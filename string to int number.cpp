//convert number string into number
#include<iostream>
using namespace std;
int print(string &str,int n)
{
	
	if(n==1)
	{
		return (str[0]-'0');
		
	}
	return (10* print(str,n-1)+str[n-1]-'0');

}
int main()
{
	string str;
	cout<<"enter string number"<<endl;
	cin>>str;
	int n=str.length();
	cout<<print(str,n)<<endl;
	return 0;
}
