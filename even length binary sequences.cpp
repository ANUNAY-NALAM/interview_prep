#include<bits/stdc++.h>
using namespace std;
void find_all(int diff,char*out,int start,int end)
{
	if (abs(diff)>(end-start+1)/2)
        return;
    if (start > end)
    {
        if (diff == 0)
            cout << out << " ";
        return;
    }
//	if(abs(diff)==(end-start+1)/2)
//	{
//		return;
//	}
//	if(start>end)
//	{
//		if(diff==0)
//		{
//			cout<<out<<" ";
//		}
//		return;
//		
//	}
	out[start]='0';
	out[end]='0';
	find_all(diff,out,start+1,end-1);
	out[start]='1';
	out[end]='0';
	find_all(diff-1,out,start+1,end-1);
	out[start]='0';
	out[end]='1';
	find_all(diff+1,out,start+1,end-1);
	out[start]='1';
	out[end]='1';
	find_all(diff,out,start+1,end-1);
}
int main()
{
    int n = 2;
    char out[2 * n + 1];
    out[2 * n] = '\0';
    find_all(0, out, 0, 2*n - 1);
    return 0;
}
//int main()
//{
//	int n;
//	cin>>n;
//	char out[2*n+1];
//	out[2*n]='\0';
//	find_all(0,out,0,2*n-1);
//	return 0;
//}
