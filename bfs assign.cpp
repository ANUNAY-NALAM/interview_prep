#include <iostream>
#include <bits/stdc++.h>


using namespace std;
// 0 -> block
// 1 -> way
// 2 -> position

int bfs(int px,int py,vector<vector<int>>&g){
    int rows = g.size();
    int dx[4] = {1,1,-1,-1};
    int dy[4] = {1,-1,-1,1};
    int cols = g[0].size();
    vector<vector<bool>>visited(rows,vector<bool>(cols,false));
    vector<vector<int>>color(rows,vector<int>(cols,0));
    queue<pair<int,int>>q;
    q.push({px,py});
    color[px][py] = 0;
    int count = 0;
    while(!q.empty()){
        auto coord = q.front();
        q.pop();
        int x = coord.first;
        int y = coord.second;
        if(visited[x][y])continue;
        color[x][y] = count++;
        visited[x][y] = true;
        for(int k = 0 ; k < 4 ; k++){
            int newX = dx[k] + x;
            int newY = dy[k] + y;
            
            if(newX >= 0 and newX < rows and newY >= 0 and newY < cols and g[newX][newY] == 1 and !visited[newX][newY]){
                //color[newX][newY] = ++count;
                q.push({newX , newY});
            }
        }
    }
    
    return count - 1;
    
}


int main() {
    int rows = 10 , cols = 8;
    vector<vector<int>>g{
        {1,1,1,1,1,1,1,1},
        {1,0,1,1,1,0,1,1},
        {1,1,1,1,0,1,1,1},
        {1,1,1,1,1,1,1,1},
        {1,1,1,0,1,1,0,1},
        {1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,0,1},
        {1,1,0,1,1,0,1,1},
        {1,1,1,1,1,1,1,1},
        {1,1,1,2,0,1,1,1},
    };
    
    
    int bobX = 9,bobY = 3;
    
    cout << bfs(bobX,bobY,g);
    
    
    
	// your code goes here
	return 0;
}
