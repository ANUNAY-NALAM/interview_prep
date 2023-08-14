#include<iostream>
using namespace std;
int main()
{
    bool leap[401];
    for(int i=1;i<401;i++)
    {
        if(i%4==0)
        {
            if(i%100==0)
            {
                if(i%400==0)
                 leap[i]=true;
                else
                 leap[i]=false;
            }
            else
            {
                leap[i]=true;
            }
        }
        else
        {
            leap[i]=false;
        }
    }
    int febDate[401]={0};
    febDate[1]=2;
    for(int i=2;i<401;i++)
    {
        if(leap[i-1]==true)
        {
            febDate[i]=febDate[i-1]-2;
            if(febDate[i]<=0)
              febDate[i]=(febDate[i]+7)%8;
        }
        else
        {
            febDate[i]=febDate[i-1]-1;
            if(febDate[i]<=0)
             febDate[i]=(febDate[i]+7)%8;
        }
    }
    int overlap[401]={0};
    for(int i=1;i<401;i++)
    {
        if(febDate[i]==7)
          overlap[i]=1;
        if(febDate[i]==6)
        {
            if(!leap[i])
            {
                overlap[i]=1;
            }
        }  
    }
    for(int i=1;i<401;i++)
    {
        overlap[i]+=overlap[i-1];
    }
    int val= overlap[400]-overlap[0];

    int t;
    cin>>t;
    while(t--)
    {
        long long result=0;
        int m1,y1,m2,y2;
        cin>>m1>>y1>>m2>>y2;
        if(m1>2)
          y1++;
        if(m2<2)
          y2++;
        long long val1=overlap[y2%400]+((long long)(y2/400)*val); 
        long long val2= overlap[(y1-1)%400]+((long long)((y1-1)/400)*val); 
        result= val1-val2;
        cout<<result;
    }
    return 0;
}