//operator overloading
#include<iostream>
using namespace std;
class Gfg{
	private:
	int a;
	public:
	Gfg()
	{
		a=5;
	}	
	void print()
	{
		cout<<a<<endl;
	}
	void operator++()
	{
		++a;
		
	}
};
int main()
{
	Gfg obj1,obj2;
	obj1.print();
	++obj1;
	obj1.print();
	return 0;

}
