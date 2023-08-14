#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        while(low<high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]<nums[high])
            {
                high=mid;
            }
            else 
            {
                low=mid+1;
            }
            cout<<mid<<endl;
        }
        cout<<"start:"<<low<<endl;
        int start=low;
        low=0;
        high=nums.size()-1;
        if(target>=nums[start]&&target<=nums[high])
        {
            low=start;
        }
        else
        {
            high=start;
        }
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(target==nums[mid])
            {
                return mid;
            }
            else if(target>nums[mid])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return -1;
    }
};
int main()
{
	Solution s;
	vector<int> v={5,1,4};
	cout<<s.search(v,0);
	return 0;
}
