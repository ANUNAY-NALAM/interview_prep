// question is to find highest element smaller than the given element using binary search
#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t>>n;
	int arr[n];
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	while(t--)
	{
	int k;
	cin>>k;
	int left=0;
	int right=n-1;
	if(k<arr[left])
	{
		cout<<-1<<endl;
	}
	else
	{
	while(left<=right)
	{
		int mid=left+(right-left)/2;
		if(arr[mid]==k)
		{
			cout<<mid<<endl;
			break;
		}
		if((arr[left]<k&&arr[right]<k))
		{
			cout<<right<<endl;
			break;
		}
		else if(arr[left]>k&&arr[right]>k)
		{
			cout<<left-1<<endl;
			break;
		}
		else if(k<arr[mid])
		{
			right=mid-1;
		}
		else
		{
			left=mid+1;
		}
	}
    }
   }
   return 0; 
}

