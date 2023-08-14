#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool myCompare(int x,int y)
	{
		return y<x;
	}
int main()
{
	vector<int> vec;
	int x;
	
	for(int i=0;i<5;++i)
	{
		cin>>x;
		vec.push_back(x);
	}
//	for(int i=0;i<5;++i)
//	{
//		cout<<vec[i]<<endl;
//	}
    vector<int>::iterator itr;
    sort(vec.begin(),vec.end(),myCompare);
    for(itr=vec.begin();itr!=vec.end();itr++)
    {
    	cout<<*itr<<" ";
	}
	
	cout<<vec.size()<<endl;
	
}
//#include <iostream>
//#include <vector>
//using namespace std;
// 
//int main()
//{
//    int arr[] = { 10, 20, 30 };
//    int n = sizeof(arr) / sizeof(arr[0]);
// 
//    vector<int> vect(arr, arr + n);
// 
//    for (int x : vect)
//        cout << x << " ";
// 
//    return 0;
//}

