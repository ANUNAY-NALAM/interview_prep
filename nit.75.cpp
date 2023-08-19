//constructors and destructors
#include<iostream>
using namespace std;
class Cars{
	private:
		string company_name;
		string model_name;
		string fuel_type;
		float milage;
		double price;
	public:
	Cars(){
		cout<<"default constructor is called"<<endl;
		string company_name="benz";
	}	
	Cars(string cname,string mname,string ftype,float m,double p)
	{
		cout<<"parameterized constructor"<<endl;
		company_name=cname;
		model_name=mname;
		fuel_type=ftype;
		 milage=m;
		 price=p;
	}
	Cars(Cars &obj)
	{
		cout<<"copy constructor"<<endl;
		company_name=obj.company_name;
		model_name=obj.model_name;
		fuel_type=obj.fuel_type;
		 milage=obj.milage;
		 price=obj.price;
	}
	void setData(string cname,string mname,string ftype,float m,double p)
	{
		company_name=cname;
		model_name=mname;
		fuel_type=ftype;
		milage=m;
		price=p;
	}
	void displayData()
	{
		cout<<"car properties"<<endl;
		cout<<"company_name:"<<company_name<<endl;
		cout<<"model_name:"<<model_name<<endl;
		cout<<"fuel_type"<<fuel_type<<endl;
		cout<<"milage"<<milage<<endl;
		cout<<"price"<<price<<endl<<endl;
	}
	~Cars()
	{
		cout<<"destructor called"<<endl;
	}
	
};
int main()
{
	Cars car1,car2("benz","s-class","desiel",12.34,7000000);
	car1.setData("bmw","s-series520","desiel",13.5,8000000);
	car1.displayData();
	car2.displayData();
	Cars car3=car1;
	car3.displayData();
	return 0;
}


