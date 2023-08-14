//compile time polymorphism
#include<bits/stdc++.h>
using namespace std;

class  Person{
   public:
   void add(int a,int b)
   {
	   cout<<" method one called"<<endl;
   }	
   void add(int a,double b)
   {
	   cout<<"method-2 called"<<endl;
   }
   void add(int a,int b,int c)
   {
	   cout<<"method -3 called"<<endl;
   }
   void add(double a,double b)
   {
	   cout<<"method-4 called"<<endl;
   }
};
int main()
{
	Person p;
	p.add(1,2);
	p.add(1,1.2);
	p.add(1,2,3);
	p.add(1.5,2.5);
	return 0;
}
