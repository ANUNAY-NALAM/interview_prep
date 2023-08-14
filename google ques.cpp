#include<bits/stdc++.h>
using namespace std;

void subString(char str[], int n,vector<vector<string>> &s,int p)
{
    for (int len = 1; len <= n; len++)
    {   
        for (int i = 0; i <= n - len; i++)
        {
            int j = i + len - 1;           
            for (int k = i; k <= j; k++)
                s[p].push_back(str[k])

        }
    }
}
void find_sub(string s,vector<vector<string>> &str,int i)
{
    int n = s.length();
    char char_array[n + 1];
    strcpy(char_array, s.c_str());
    subString(char_array,strlen(char_array),str,i);
}
vector<long long> findScore (int n, int k, vector<string> s) {

  vector<vector<string>> str;
  for(int i=0;i<s.size();++i)
  {
  find_sub(s[i],str,i);
  }
  vector<int> score[s.size()];
  for(int k=0;k<s.size();++k)
  {
  int count=0;
  for(int i=0;i<str.size();++i)
  {
  	if(i==k)
  	continue;
  	for(int j=0;j<str[i].size();++j)
  	{
  		if(str[i][j]==str[k][i])
  		++count;
	}
  }
  score.push_back(count);
  }
  return score;
}

int main() {

ios::sync_with_stdio(0);

cin.tie(0);

int n;
cin >> n;
int k;
cin >> k;

vector<string> s(n);


for (int i_s= 0; i_s < n; i_s++)

{

cin >> s[i_s];

vector<long long> out_;

}

out_findScore(n, k, s);

cout << out [0];

for(int i_out_ = 1; i_out_< out_.size(); i_out_++)

cout << * << out [i_out_];

}

