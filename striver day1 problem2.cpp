/*
Program to generate Pascal’s Triangle
Problem Statement: Given an integer N, return the first N rows of Pascal’s triangle.

In Pascal’s triangle, each number is the sum of the two numbers directly above it as shown in the figure below:

Input Format: N = 5

Result:
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1 

Explanation: There are 5 rows in the output matrix. 
Each row corresponds to each one of the rows in the image shown above.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int m=2*n-1;
	int arr[n][m];
	memset(arr,0,sizeof(arr));
	int ptr=n-1;
	for(int i=0;i<n;++i)
	{
		int ktr=ptr;
		int kcr=i+1;
		for(int j=0;j<m;++j)
		{
			if(kcr!=0)
			{
			if(j==ktr)
			{
				if(i!=0&&j!=0)
				{
					arr[i][ktr]=arr[i-1][ktr+1]+arr[i-1][ktr-1];
				}
				else 
				{
					arr[i][ktr]=1;
				}
				kcr--;
				if(kcr!=0)
				ktr=ktr+2;
			}
		    }
		    
		}
		--ptr;
	}
	arr[n-1][m-1]=1;
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<m;++j)
		{
			cout<<arr[i][j]<<"   ";
		}
		cout<<endl;
	}
	return 0;
	
}
