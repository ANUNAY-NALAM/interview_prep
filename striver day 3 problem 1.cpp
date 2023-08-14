/*
Search in a sorted 2D matrix
Problem Statement: Given an m*n 2D matrix and an integer, write a program to find if the given integer exists in the matrix.

Given matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row
Example 1:

Input: matrix = 
[[1,3,5,7],
 [10,11,16,20],
 [23,30,34,60]], 

target = 3

Output: true

Explanation: As the given integer(target) exists in the given 2D matrix, the function has returned true.
Example 2:

Input: matrix = 
[[1,3,5,7],
 [10,11,16,20],
 [23,30,34,60]], 

target = 13

Output: false

Explanation: As the given integer(target) does not exist in the given 2D matrix, the function has returned false.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	cin>>k;
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<m;++j)
		{
			cin>>arr[i][j];
		}
	}
	int low=0;
	int high=m*n-1;
	while(low<high)
	{
		int mid=low+(high-low)/2;
		if(k>arr[mid/m][mid%m])
		{
			low=mid;
		}
		else if(k<arr[mid/m][mid%m])
		{
			high=mid;
		}
		else
		{
			cout<<"element found"<<endl;
			break;
		}
	}
	cout<<"element doesn't found"<<endl;
	return 0;
}
