#include<iostream>
using namespace std;
class Gfg{
	public:
	 static int i;//program will return error because we cannot intialize same static variable by two objects differently

};
int main()
{
	Gfg obj1,obj2;
	obj1.i=2;
	obj2.i=3;
	cout<<obj1.i<<" "<<obj2.i;
	return 0;
}
