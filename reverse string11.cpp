#include<iostream>
using namespace std;
void reverse(string& str,int l,int h)
{
    if(l>=h)
    return;
    swap(str[l],str[h]);
    reverse(str,l+1,h-1);
}
int main()
{
    string str;
    cin>>str;
    int n=str.length();
    reverse(str,0,n-1);
    cout<<str<<endl;
    return 0;

}
