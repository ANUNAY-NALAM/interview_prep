//demonstrate the use of sstatic key word
#include<iostream>
using namespace std;
class demo{
	
		static int count;
		demo()
		{
			count=0;
		}
		cout<<count<<" ";
		count++;
};
int main()
{
	
	int i;
	for(i=0;i<5;++i)
	{
		demo();
	}
	return 0;
}
