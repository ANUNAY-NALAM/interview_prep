//backtracking knight tour problems
//2d array using double pointer
//how to go to end and if know wrong then come back to position nd trck all
#include<iostream>
using namespace std;
bool isvalid(int **board,int n,int n_x,int n_y)
{
	if(n_x>=0&&n_x<n&&n_y>=0&&n_y<n&&board[n_x][n_y]==-1)
	return true;
	
	return false;
}
bool knighttour(int **board,int n,int m_x[],int m_y[],int c_x,int c_y,int pos)
{
	if(pos==n*n)
	{
		return true;
	}
	
	for(int i=0;i<8;++i)
	{
		int n_x=m_x[i]+c_x;
		int n_y=m_y[i]+c_y;
		if(isvalid(board,n,n_x,n_y))
		{
			board[n_x][n_y]=pos;
			if(knighttour(board,n,m_x,m_y,n_x,n_y,pos+1))
			return true;
			board[n_x][n_y]=-1;
		}
	}
	return false;
}
int main()
{
	int n;
	cin>>n;
	int **board=new int *[n];
	for(int i=0;i<n;++i)
	{
		board[i]=new int[n];
	}
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n;++j)
		{
			board[i][j]=-1;
		}
	}
	int m_x[]={1,1,2,2,-1,-1,-2,-2};
	int m_y[]={2,-2,1,-1,2,-2,1,-1};
	board[0][0]=0;
	int pos=1;
	if(!knighttour(board,n,m_x,m_y,0,0,pos))
	{
		cout<<"no valid arrangement"<<endl;
	}
	else
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n;++j)
		{
			cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}
}
