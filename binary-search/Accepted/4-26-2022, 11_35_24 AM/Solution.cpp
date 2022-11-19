// https://leetcode.com/problems/binary-search

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        while(low<high){
            int mid=low+(high-low+1)/2;
                if(nums[mid]<=target)
                    low=mid;
                else
                    high=mid-1;
        }
        if(nums[low]==target)
            return low;
        return -1;
        
    }
};