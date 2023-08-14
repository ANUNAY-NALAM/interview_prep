// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here
        int top=0,bottom=r-1,left=0,right=c-1;
        int direc=0;
        vector<int> res;
        int k=0;
        while(k<r*c)
        {
            if(direc==0)
            {
                for(int i=left;i<=right;++i)
                {
                    res[k]=matrix[i][top];
                }
                top++;
                ++direc;
            }
            else if(direc==1)
            {
                for(int i=top;i<=bottom;i++)
                {
                    res[k]=matrix[right][i];
                    
                }
                right--;
                ++direc;
            }
            else if(direc==2)
            {
                for(int i=right;i>=left;--i)
                {
                    res[k]=matrix[i][bottom];
                }
                bottom--;
                ++direc;
            }
            else if(direc==3)
            {
                for(int i=bottom;i>=top;i--)
                {
                    res[k]=matrix[left][i];
                }
                left++;
                direc=0;
            }
            ++k;
        }
        for(int i=0;i<res.size();++i)
        {
        	cout<<res[i]<<" ";
		}
        return res;
    }
    };    
                    // { Driver Code Starts




// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
