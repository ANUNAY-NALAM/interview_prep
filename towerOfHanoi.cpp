//tower of hanoi
#include<iostream>
using namespace std;


void towerOfHanoi(int n,int a,int b,int c)
{

	if(n>0)
	{
		towerOfHanoi(n-1,a,c,b);
		cout<<"Move a disk from disk"<<a<<"to disk "<<b<<endl;
		
		towerOfHanoi(n-1,b,a,c);
	}
}

int main()
{
	cout<<"enter no of disks"<<endl;
	int n;
	cin>>n;
	int a=1,b=2,c=3;
	towerOfHanoi(n,a,b,c);
	return 0;
}


