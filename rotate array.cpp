//a1) rotating one element once and looping it to number of rotations(tc->o(n)*o(n))(sc->o(1))
//a2)take elements equal to no of rotaions and keep it another array change posion of remaining elements
//replace it in remaing spaces(tc->o(n) sc->o(n))
//a3)reverse num of elements at first and reverse saperately remaining elements then reverse entire array
//(tc->o(n) sc->o(1))
#include<iostream>
using namespace std;

void reverse(int start,int end,int arr[])
{
	int temp;
	while(start<end)
	{
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}

void rotate(int arr[],int s,int n)
{
	reverse(0,n-1,arr);
	reverse(n,s-1,arr);
	reverse(0,s-1,arr);
}
int main()
{
	int arr[]={1,2,3,4,5,6};
	int s= sizeof(arr)/sizeof(arr[0]);
	int n=2;
	rotate(arr,s,n);
    for(int i=0;i<s;++i)
	{
		cout<<arr[i];
		}	
	return 0;
}
