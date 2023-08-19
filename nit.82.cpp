#include<iostream>
using namespace std;
class Gfg{
	private :
		int a;
	public:
		Gfg()
		{
			a=0;
		}
		friend void getA(& Gfg);
};
void getA(&Gfg)
{
	cout<<a<<endl;
}
int main()
{
	Gfg::getA;
	return 0;
}
