//static data memebers and member functions
#include<iostream>
using namespace std;
class MyClass{
	public:
	int x;
	static int count;
	MyClass()
	{
		++count;
	}
	static getCount()
	{
		return count;
	}	
};
int MyClass::count=0;
int main()
{
	cout<<"intial count"<<MyClass::count<<endl;
	MyClass obj1;
	cout<<"count after 1 object"<<MyClass::count<<endl;
	MyClass obj2;
	cout<<"count after 2 object"<<MyClass::count<<endl;
	return 0;
}
