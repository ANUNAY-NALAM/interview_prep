#include<iostream>
using namespace std;

class cube{
	int side;
	public:
	cube()
	{
		cout<<"constructor is called"<<endl;
	}
};
class paracube{
	int side;
	public:
		paracube(int x)
		{
			side=x;
		}
		int getdata()
		{
			return side;
		}
};
class copycube{
	public:
	int side;
	int getdata()
	{
		return side;
	}
};
class descube{
	int side;
	public:
		~descube()
		{
			cout<<"destructor is called"<<endl;
		}
	
};
int main()
{
	cube c;
	paracube c1(10);
	paracube c2(20);
	cout<<"1st cube side:"<<c1.getdata()<<endl;
	cout<<"2nd cube side:"<<c2.getdata()<<endl;
	copycube c3;
	c3.side=30;
	copycube c4(c3);
	cout<<"side of copy cube: "<<c4.getdata()<<endl;
	descube c5;
	return 0;
}
