//tower of honai for 5 disks
#include<iostream>
using namespace std;
int i=0;
int TowerOfHanoi(int n,int a,int b,int c)//a->c using b;
{
	if(n>0)
	{
	    TowerOfHanoi(n-1,a,c,b);
		++i;
	    TowerOfHanoi(n-1,b,a,c);
	}
	else
	{
	return i;
    }
}
int main()
{
	cout<<"tower of honoi with 15 disks"<<endl;
	i=TowerOfHanoi(15,1,2,3);
	cout<<"total number of steps to acomplist task:"<<i<<endl;
	return 0;
}
