#include<iostream>
#include<string.h>
using namespace std;
void palin(string str,int max)
{
	int maxp,flag;
	string str1;
	int start=0;
	int i,j,k;
	maxp=1;
	for(i=0;i<max;++i)
	{
		if(maxp>(max-i))
		break;
		for(j=i;j<max;++j)
		{
			flag=1;
			for(k=0;k<(j-i+1)/2;++k)
			{
			    if(str[i+k]!=str[j-k])
				{
					flag=0;
				}	
			}
			if(flag==1&&(j-i+1)>maxp)
			{
				maxp=(j-i+1);
				start=i;
			}
		}
	}
	
	cout<<"palindome is:"<<endl;
	
	
	cout<<str.substr(start,start+maxp)<<endl;
	
	/*for(i=start;i<start+maxp;++i)
	{
		cout<<str[i];
	}*/
	
}
int main()
{
	string str="vnrtysfrzrmzl";
	int max=str.length();
	palin(str,max);
	return 0;
}
