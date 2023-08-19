//inline member functions
#include<iostream>
using namespace std;
int Max(int x,int y)
{
	return (x>y)?x:y;
}
int main()
{
	cout<<"max of (20,10):"<<Max(20,10)<<endl;
	cout<<"max of (50,40):"<<Max(50,40)<<endl;
	return 0;
}
