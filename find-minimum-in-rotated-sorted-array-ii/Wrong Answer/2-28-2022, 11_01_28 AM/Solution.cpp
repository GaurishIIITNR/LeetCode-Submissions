// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii

class Solution {
public:
    int findMin(vector<int>& nums) {
         // predicate nums[x]>=nums[0] /// tttttffffff aim--> finding first f
        int low=0,high=nums.size()-1;
        while(low<high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]>=nums[0])
                low=mid+1;
            else
                high=mid;         
        }
        //turn low;
        return   min(nums[0],nums[low]); 
    }
};