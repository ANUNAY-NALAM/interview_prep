#include<bits/stdc++.h>
using namespace std;
#define r 6
#define c 4


int isvalid(int mat[r][c],int i,int j,int visited[r][c])
{
	if(i>=0&&j>=0&&i<r&&j<c&&mat[i][j]&&!visited[i][j])
	return 1;
	else
	return 0;
}
void bfs(int mat[r][c],int visited[r][c],int i,int j)
{
	int row[]={-1,-1,-1,0,0,1,1,1};
	int col[]={-1,0,1,-1,1,-1,0,1};
	queue<pair<int,int>> que;
	que.push(make_pair(i,j));
	visited[i][j]=1;
	while(!que.empty())
	{
		int x=que.front().first;
		int y=que.front().second;
		que.pop();
		for(int k=0;k<8;++k)
		{
			if(isvalid(mat,x+row[k],y+col[k],visited))
			{
				visited[x+row[k]][y+col[k]]=true;
				que.push(make_pair(x+row[k],y+col[k]));
			}
		}
	}
}
int main()
{
	int mat[][c]={
	{1,1,1,0},
	{0,1,0,0},
	{1,1,0,0},
	{0,0,1,1},
	{0,0,0,0},
	{1,0,0,1}
	};
	int visited[r][c];
	memset(visited,0,sizeof(visited));
	int res=0;
	for(int i=0;i<r;++i)
	{
		for(int j=0;j<c;++j)
		{
			if(mat[i][j]&&!visited[i][j])
			{
			bfs(mat,visited,i,j);
			res=res+1;
		    }
		}
	}
	cout<<res<<endl;
	return 0;
}
