#include<iostream>
using namespace std;

void recur(int mat[][4] ,int sum,int col)
{
	 if(col>3)
	 {
	 	cout<<sum<<endl;
	 	return;
	 }
	 for(int row=0;row<=3;++row)
	 {
	 	recur(mat,sum+mat[row][col],col+1);
	 }
	 
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int sum=0;
		int mat[4][4];
		for(int i=0;i<4;++i)
		{
			for(int j=0;j<4;++j)
			{
				cin>>mat[i][j];
			}
		}
		recur(mat,sum,0);
	}
	return 0;
}
