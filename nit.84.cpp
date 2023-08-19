#include <iostream>
using namespace std;
const float Meter_To_Float=3.280833;
class Distance
{
int feets; float inches;
public: 
Distance() 
{ 
feets=0; 
inches=0.0; 
}
Distance(float num_of_meters)
{
float feets_in_float= Meter_To_Float *num_of_meters;
feets=int(feets_in_float);
inches=12*(feets_in_float-feets);
}
void displaydist()
{
cout<<"Converted Value is:
<<feets<<
<<inches<<'\"'<< inches;
 }
};
int main()
{
float meters;
cout<<"Enter values in meter:";
cin >>meters;
Distance distance = meters;
distance.displaydist();
}
