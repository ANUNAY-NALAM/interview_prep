//class object as static
#include<iostream>
using namespace std;
class Gfg
{
	int i;
	public:
		Gfg()
		{
			i=0;
			cout<<"intializing constructor"<<endl;
			
		}
		~Gfg()
		{
			cout<<"intializing destructor"<<endl;
		}
	
};
int main()
{

		staticGfg obj;
	
	cout<<"end of main"<<endl;
	return 0;
}
