#include<iostream>
#include<vector>
using namespace std;
template <class T>

void display(vector<T> &v1)
{
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" "<<endl;
	}
}
int main()
{
	vector<int> v;
	vector<char> v2(4);
	v2.push_back('5');
	v2.push_back('7');
	
	vector<char> v3(v2);
	v3.push_back('3');
	vector<int> v4(6,45);
	cout<<v4.size();
	
	
    int element;
	int size=5;
	
	/*cout<<"enter size"<<endl;
	cin>>size;
	for(int i=0;i<size;++i)
	{
		cout<<"enter an element"<<endl;
		cin>>element;
		v.push_back(element);
	}
	//v.pop_back();
	display(v);
	vector<int>:: iterator it=v.begin();
	v.insert(it,5,556);
	display(v);*/
	//display(v4);
}
