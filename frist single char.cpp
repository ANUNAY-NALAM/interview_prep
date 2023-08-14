#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int arr[26];
	for(int i=0;i<n;++i)
	{
		arr[i]=0;
	}
	for(int i=0;i<n;++i)
	{
		arr[s[i]-'a']+=1;
	}
	
	for(int i=0;i<n;++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<n;++i)
	{
		if(arr[s[i]-'a']==1)
		{
			cout<<s[i];
			return 0;
		}
	}
	cout<<"no element found"<<endl;
	return 0;
}
