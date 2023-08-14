/*
next_permutation : find next lexicographically greater permutation
Problem Statement: Given an array Arr[] of integers, rearrange the numbers of the given array into the lexicographically next greater permutation of numbers.

If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).

Example 1 :

Input format: Arr[] = {1,3,2}

Output: Arr[] = {2,1,3}

Explanation: All permutations of {1,2,3} are {{1,2,3} , {1,3,2}, {2,13} , {2,3,1} , {3,1,2} , {3,2,1}}. So, the next permutation just after {1,3,2} is {2,1,3}.
Example 2:

Input format: Arr[] = {3,2,1}

Output: Arr[] = {1,2,3}

Explanation: As we see all permutations of {1,2,3}, we find {3,2,1} at the last position. So, we have to return the topmost permutation.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	int k=-1;
	for(int i=n-1;i>=0;--i)
	{
		if(arr[i]>arr[i-1])
		{
			k=i;
			break;
		}
	}
	for(int i=(k);i<n;++i)
	{
		if(arr[i]==arr[k-1]+1)
		{
		   swap(arr[i],arr[k-1]);
		}
	}
	int i=k;
	int j=n-1;
	while(i<j)
	{
		swap(arr[i],arr[j]);
		++i;
		--j;
	}
	for(int i=0;i<n;++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
	
}
