#include <iostream>
using namespace std;
const float Meter_To_Float=3.280833;
class Distance
{ int feet; float inches;
public: Distance()
{ feet=0; inches=0.0; }
Distance(int ft, float in)
{ feet=ft; inches=in; }
operator float()
{
float feet_in_fractions=inches/12;
feet_in_fractions+=float(feet);
return
(feet_in_fractions/Meter_To_Float);}};
int main()
{
int feet; float inches;
cout <<"Enter distance in Feet and
Inches";
cout<<"\nFeet:"; cin>>feet;
cout<<"Inches:"; cin>>inches;
Distance dist(feet, inches);
float meters=dist; // This will call
overloaded casting operator
cout<<"Converted Distance in Meters
is: "<< meters;
return 0;
}
