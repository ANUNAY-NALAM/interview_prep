#include<iostream>
using namespace std;
class A{
	private :
		int a;
	public:
	A()
	{
		a=5;
		}
	friend void getA(A & x);		
};
void getA(A &x)
{
	cout<<x.a<<endl;
}
int main()
{A x;
	getA(x);
	return 0;
}
