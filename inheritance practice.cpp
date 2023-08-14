#include<bits/stdc++.h>
using namespace std;
class shape{
	public:
	int width;
	int height;
		void setWidth(int width)
		{
			this->width=width;
		}
		void setHeight(int height)
		{
			this->height=height;
		}
};
class rectangle: public shape{
	public:
		void get_area()
		{
			cout<<width*height<<endl;
		}
};
int main()
{
	rectangle obj;
	obj.setHeight(5);
	obj.setWidth(6);
	obj.get_area();
	return 0;
}

