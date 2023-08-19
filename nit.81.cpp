#include<iostream>
using namespace std;
class Gfg
{
	public: 
	static int i;
Gfg()
{
	++i;
}
static getCount()
{
	return i;
}
 	
};
int Gfg::i=0;
int main()
{
	Gfg obj1;
	cout<<Gfg::getCount()<<endl;
	Gfg obj2;
	cout<<Gfg::getCount()<<endl;
	return 0;
}
