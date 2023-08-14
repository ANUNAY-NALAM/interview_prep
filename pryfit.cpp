// code was worng plese do it again
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.length();
		int maxBlock=0;
		int arr[n+1];
		
		for(int i=0;i<n;++i)
		{
			arr[i+1]=arr[i];
			if(s[i]=='1')
			 arr[i+1]++;
		}
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<=n;++j)
			{
				maxBlock= max(maxBlock,(arr[j]-arr[i])+(i-arr[i])+(n-j-(arr[n]-arr[j])));
				maxBlock= max(maxBlock,arr[i]+(arr[n]-arr[j])+(j-i-(arr[j]-arr[i])));
			}
		}
		cout<<n-maxBlock<<endl;
		memset(arr,0,100000);
		
	}
	return 0;
}
