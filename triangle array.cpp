//Recursion is the key. At each iteration create a new array which contains the Sum of consecutive elements in the array passes as parameter.
//Make a recursive call and pass the newly created array in the previous step.
//While back tracking print the array (for printing in reverse order).
#include<iostream>
using namespace std;

void print(int arr[],int n)
{
	if(n<1)
	return;
	int temp[n-1];
	for(int i=0;i<n-1;++i)
	{
		temp[i]=arr[i]+arr[i+1];
	}
	print(temp,n-1);
	for(int i=0;i<n;++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int arr[]={1,2,3,4,5};
	print(arr,5);
	return 0;
}
