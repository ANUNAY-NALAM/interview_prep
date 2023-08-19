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
cout<<"("<<xco<<","<<yco<<")"<<endl;
}
};
class Polar
{
private:
float radius, angle;
public:
Polar()
{ 
radius=0; angle =0;
}
Polar(float rad, float ang)
{ 
radius =rad;
angle=ang;
}
operator Cartesian()
{
float x=static_cast<int>(radius *
cos(angle));
float y=static_cast<int>(radius *
sin(angle));
return Cartesian(x,y);
}
void display()
{
cout<<"("<<radius<<","<<angle<<")";
}
};
int main()
{
Polar pol(10.0, 0.78);
Cartesian cart;
cart=pol;
cout<<"\nGiven Polar: ";
pol.display();
cout<<"\nEquivalent cartesian: ";
cart.display();
return 0;
}

