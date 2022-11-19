// https://leetcode.com/problems/find-subarrays-with-equal-sum

class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int sm=-100;
        for(int i=0;i<nums.size()-1;i++){
            if(sm==nums[i]+nums[i+1])
                return 1;
            sm=nums[i]+nums[i+1];
        }return 0;
    }
};