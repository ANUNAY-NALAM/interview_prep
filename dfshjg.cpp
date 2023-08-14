#include<bits/stdc++.h>
using namespace std;

int m, n;

vector<vector<vector<int>>> vec;
vector<vector<vector<int>>> vis;
	
int dfs(int i, int j, int k){
	int ans = 1;
	if(i < 0 || j < 0 || i == m || j == n){
		return 0;
	}
	if(k == 0){
		if(vec[i][j][1] == vec[i][j][k] && vis[i][j][1] == 0){
			vis[i][j][1] = 1;
			ans += dfs(i, j, 1);
		}
		if(vec[i][j][3] == vec[i][j][k] && vis[i][j][3] == 0){
			vis[i][j][3] = 1;
			ans += dfs(i, j, 3);
		}
		if(j-1 >= 0 && vec[i][j-1][2] == vec[i][j][k] && vis[i][j-1][2] == 0){
			vis[i][j-1][2] = 1;
			ans += dfs(i, j-1, 2);
		}
	}
	if(k == 1){
		if(vec[i][j][0] == vec[i][j][k] && vis[i][j][0] == 0){
			vis[i][j][0] = 1;
			ans += dfs(i, j, 0);
		}
		if(vec[i][j][2] == vec[i][j][k] && vis[i][j][2] == 0){
			vis[i][j][2] = 1;
			ans += dfs(i, j, 2);
		}
		if(i-1 >= 0 && vec[i-1][j][3] == vec[i][j][k] && vis[i-1][j][3] == 0){
			vis[i-1][j][3] = 1;
			ans += dfs(i-1, j, 3);
		}
	}if(k == 2){
		if(vec[i][j][1] == vec[i][j][k] && vis[i][j][1] == 0){
			vis[i][j][1] = 1;
			ans += dfs(i, j, 1);
		}
		if(vec[i][j][3] == vec[i][j][k] && vis[i][j][3] == 0){
			vis[i][j][3] = 1;
			ans += dfs(i, j, 3);
		}
		if(j+1 < n  && vec[i][j+1][0] == vec[i][j][k] && vis[i][j+1][0] == 0){
			vis[i][j+1][0] = 1;
			ans += dfs(i, j+1, 0);
		}
	}if(k == 3){
		if(vec[i][j][0] == vec[i][j][k] && vis[i][j][0] == 0){
			vis[i][j][0] = 1;
			ans += dfs(i, j, 0);
		}
		if(vec[i][j][2] == vec[i][j][k] && vis[i][j][2] == 0){
			vis[i][j][2] = 1;
			ans += dfs(i, j, 2);
		}
		if(i+1 <m && vec[i+1][j][1] == vec[i][j][k] && vis[i+1][j][1] == 0){
			vis[i+1][j][1] = 1;
			ans += dfs(i+1, j, 1);
		}

	}
	return ans;
}

int main(){
	
	
//	cin>>m>>n;
    m=5,n=5;
	vec.assign(m, vector<vector<int>> (n, vector<int> (4, -1)));
    vis.assign(m, vector<vector<int>> (n, vector<int> (4, 0)));
//	for(int i = 0 ; i < m ; i++){
//		for(int j = 0; j < n ; j++){
//			for(int k = 0; k < 4; k++){ 
//				cin>>vec[i][j][k];
//			}
//		}
//	}
//1-red
//2-yellow
//3-blue
//4-green
	vec[0][0]={3,1,3,2};
	vec[0][1]={4,1,3,1};
	vec[0][2]={4,3,2,4};
	vec[0][3]={4,1,1,1};
	vec[0][4]={2,1,3,4};
	vec[1][0]={3,1,1,1};
	vec[1][1]={3,4,3,3};
	vec[1][2]={1,1,3,3};
	vec[1][3]={2,2,4,1};
	vec[1][4]={2,2,3,4};
	vec[2][0]={4,1,3,4};
	vec[2][1]={3,4,3,1};
	vec[2][2]={2,1,1,1};
	vec[2][3]={4,4,1,1};
	vec[2][4]={3,3,3,1};
	vec[3][0]={3,4,3,3};
	vec[3][1]={2,4,1,1};
	vec[3][2]={1,1,4,2};
	vec[3][3]={3,3,3,2};
	vec[3][4]={4,4,4,1};
	vec[4][0]={2,3,3,2};
	vec[4][1]={2,1,4,4};
	vec[4][2]={3,3,4,4};
	vec[4][3]={3,1,3,1};
	vec[4][4]={2,2,4,4};
	int ans = 0, col = 1;
	for(int i = 0; i < m ; i++){
		for(int j = 0 ; j < n; j++){
			for(int k = 0 ; k < 4; k++){
				if(vis[i][j][k] == 0){
					//cout<<i<<" "<<j<<" "<<ans<<endl;
					vis[i][j][k]=1;
					int t = dfs(i, j, k);
					ans = max(ans, t);
					if(ans < t){
						col = vec[i][j][k];
						ans = dfs(i, j, k);
					
					}
				}
			}
		}
	}
	string str;
	if(col==1)
	str="red";
	if(col==2)
	str=="yellow";
	if(col==3)
	str="blue";
	if(col==4)
	str="green";
	cout<<str<<" has max connected elements i.e"<<ans;
	return 0;
}


