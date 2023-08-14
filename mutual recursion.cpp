//mutual recusion
//finding whether the number is even or odd
#include<iostream>
using namespace std;
int odd(int n);
int even(int n)
{
if(n==0)
return 0;
else
return odd(n-1);
}
int odd(int n){
	if(n==0)
	return 1;
	else{
		return even(n-1);
	}
}
int main()
{
	int n;
	cin>>n;
    int p=even(n);
    if(p==0)
    {
    	cout<<"even number"<<endl;
	}
	else
	cout<<"odd number"<<endl;
	return 0;
}
