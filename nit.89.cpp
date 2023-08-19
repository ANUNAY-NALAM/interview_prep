//operator overloading +
#include<iostream>
using namespace std;
class Complex
{
	private:
		int real;
		int imag;
	public:
	    Complex()
		{
			real=0;
			imag=0;
		}
		Complex(int r,int i)
		{
			real=r;
			imag=i;
		}	
		Complex operator+(Complex c)
		{
			Complex temp;
			temp.real=real+c.real;
			temp.imag=imag+c.imag;
			return temp;
		}
		void print()
		{
			cout<<real<<"+"<<"i"<<imag<<endl;
		}
};
int main()
{
	Complex c1(3,4),c2(3,4),c3;
	c3=c1+c2;
	c3.print();
	return 0;
}
