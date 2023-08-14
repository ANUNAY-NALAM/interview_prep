//a1=>asuming every element as majority element and finding count and then finding majority element(o(n^2))
//a2=>sorting the array and finding the middle element and it is the majority element(O(n*log(n)))
//a3=>assuming first element as majority if second element contiues to be same then count++ else count-- 
//like than traverse till the end if count is +ve then most probably we found majority element then 
//cross ckeck whether it is majority element or not(o(n))
#include<iostream>
using namespace std;

int majority(int arr[],int s)
{
	int maj=arr[0];
	int count=1;
	for(int i=1;i<s;++i)
	{
		if(arr[i]==maj)
		++count;
		else
		--count;
		if(count==0)
		{
			maj=arr[i];
			count=1;	
		}
	}
	int n=0;
	if(count>0)
	{
		for(int i=0;i<s;++i)
	    {
	    	if(arr[i]==maj)
	    	++n;
		}
		if(n>(s/2))
		cout<<"majority element is"<<maj<<endl;
		else
		{
			cout<<"no majority element"<<endl;
		}
		
	}
	else
	{
		cout<<"no majority element"<<endl;
	}
	
}
int main()
{
	int arr[]={2,7,3,2,2,2,2,7,7};
	int s= sizeof(arr)/sizeof(arr[0]);
	
	majority(arr,s);
	return 0;
}