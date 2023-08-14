#include<iostream>
using namespace std;

class person{
	char name[50];
	int age;
	public:
		void take_input(void);
		void display(void);
};
  void person::take_input()
  {
  	cout<<"enter name"<<endl;
  	cin>>name;
  	cout<<"enter age"<<endl;
  	cin>>age;
  }
  void person::display()
  {
  	cout<<"your name is"<<name<<endl;
  	cout<<"your age is "<<age<<endl;
  }

int main()
{
	person obj;
	obj.take_input();
	obj.display();
	return 0;
}
