//knap sack using recursion
#include<iostream>
using namespace std;
int max(int a, int b) { return (a > b) ? a : b; }
int knapsack(int n,int w,int a[],int b[])
{
	if(n==0||w==0)
	return 0;
	else if(a[n]>w)
	{
		return knapsack(n,w,a,b);
	}
	
		return max(b[n]+knapsack(n-1,w-a[n],a,b)
		                ,kanpsack(n-1,w,a,b));
	
}
int main()
{
	int i,n,w;
	cout<<"enter size"<<endl;
	cin>>n;
	cout<<"enter total weight"<<endl;
	cin<<w;
	int a[n],b[n];
	cout<<"enter repective weights"<<endl;
	for(i=0;i<n;++i)
	{
		cin>>a[i];
	}
	cout<<"enter respective profits"<<endl;
	for(i=0;i<n;++i)
	{
		cin>>b[i];
	}
	cout<<"maximum profit :"<<knapsack(n,w,a,b);
	return 0;
}

