//maximum sub array
#include<iostream>
using namespace std;

void maxSub(int arr[],int n)
{
	int sumHere=0,sumTotal=INT_MIN;
	for(int i=0;i<n;++i)
	{
		sumHere=sumHere+arr[i];
		if(sumTotal<sumHere)
	     {
	     	sumTotal=sumHere;
	     	
		 }
		 if(sumHere<0)
		 {
		 	sumHere=0;
		 }
	}
	cout<<sumTotal<<endl;
}
int main()
{
	int arr[]={-2,-3,4,-1,-2,1,5,-3};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	maxSub(arr,n);	
}


