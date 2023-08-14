#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int>&v,int target,int n){
	int low = 0 , high = n - 1;
	while(low <= high){
		int mid = (low + high) >> 1;
		if(v[mid] > target) high = mid - 1;
		else if(v[mid] < target) low = mid + 1;
		else{
			if(mid == 0 || v[mid] != v[mid-1]) return mid;
			else high = mid - 1;
		}
	}
	
	return high;
}
int upperBound(vector<int> &a, int length, int val){
    int low = 0;
    int h = length;
    while(low<h){
        int mid = (low+h)/2;
        if(val>=a[mid])
        low=mid+1;
        
        else h=mid;
    }
    return low;
}
int main()
{
	vector<int> vec{1,3,5,5,7,7,7,9,9,9};
	int a1=upperBound(vec,1,10);
	cout<<a1<<endl;
	int a2=upperBound(vec,6,10);
	cout<<a2<<endl;
	int a3=upperBound(vec,7,10);
	cout<<a3<<endl;
	int a4=upperBound(vec,14,10);
	cout<<a4<<endl;
	return 0;
}

