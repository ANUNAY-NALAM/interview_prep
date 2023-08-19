#include<iostream>
#include<cmath>
using namespace std;
class Cartesian {
private:
float xco, yco;
public:
Cartesian()
{ xco=0; yco=0;
}
Cartesian(float x, float y)
{
xco=x; yco=y;
}
void display()
{
cout<<("<<xco<<","<<yco<<")<<endl;
}
};
