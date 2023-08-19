//friend function 
#include<iostream>
using namespace std;
class Distance{
	private:
	int meters;
	public:
		Distance()
		{
			meters=0;
		}
		void displayData(void)
		{
			cout<<"distance is:"<<endl;
			cout<<meters<<endl;
		}
	friend void addValue(Distance &d);
};
void addValue(Distance &d)
{
	d.meters=d.meters+5;
}
int main()
{
	Distance d1;
	d1.displayData();
	addValue(d1);
	d1.displayData();
	return 0;
}
