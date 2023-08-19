//intailization of static variable
#include<iostream>
using namespace std;
class Gfg{
	public :
		static int i;
		Gfg()
		{
			++i;
		}
		static int getCount()
		{
			return i;
		}
	
};
int Gfg::i=5;
int main()
{
	Gfg obj1;
	cout<<Gfg::getCount();
	Gfg obj2;
	cout<<obj2.getCount();
	return 0;
}
