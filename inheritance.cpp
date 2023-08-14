//inheritance
#include<iostream>
using namespace std;

class shape{
	protected:
		int width;
		int height;
	public:
	  getheight(int h)
	  {
	  	height=h;
	  }	
	  getwidth(int w)
	  {
	  	width=w;
	  }
	  
};

class rectangle:public shape{
	public:
		int getarea()
		{
			return height*width;
		}
};


int main()
{
	rectangle r1;
	r1.getheight(5);
	r1.getwidth(4);
	cout<<r1.getarea();
	return 0;
}
