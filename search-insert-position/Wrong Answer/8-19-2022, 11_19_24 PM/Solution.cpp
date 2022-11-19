// https://leetcode.com/problems/search-insert-position

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        while(low<high){
            int mid=low+(high-low+1)/2;
            if(nums[mid]<=target)low=mid;
            else high=mid-1;
        }
        if(nums[low]==target)return low;
        return low+1;
    }
};