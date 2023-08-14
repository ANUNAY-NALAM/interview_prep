#include<bits/stdc++.h>
using namespace std;

void print_all(int c[],int n)
{
	for(int i=0;i<n;++i)
	{
		cout<<c[i]<<" ";
	}
	cout<<endl;
}
void get_all(int a[],int b[],int c[],int i,int j,int m,int n,int len,bool flag)
{
	
	
	if(flag)
	{
		if(len)
	    {
		print_all(c,len+1);
	    }
		for(int k=i;k<m;++k)
	    {
		if(!len)
		{
			c[len]=a[k];
			get_all(a,b,c,k+1,j,m,n,len,!flag);
		}
		else
		{
			
				if(a[k]>c[len])
				{
					c[len+1]=a[k];
				}
				get_all(a,b,c,k+1,j,m,n,len+1,!flag);
			
		}
	    }
	}
	else
	{
		for(int k=j;k<n;++k)
		{   if(b[k]>c[len])
		   {
			c[len+1]=b[k];
			get_all(a,b,c,i,k+1,m,n,len+1,!flag);
		   }
		}
	}
}
int main()
{
	int a[]={10,15,25};
	int b[]={5,20,30};
	int c[6];
	get_all(a,b,c,0,0,3,3,0,true);
	return 0;
}
