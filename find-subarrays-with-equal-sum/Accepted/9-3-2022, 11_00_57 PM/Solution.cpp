// https://leetcode.com/problems/find-subarrays-with-equal-sum

class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        map<int,bool>mp;
        int sm=-100;
        for(int i=0;i<nums.size()-1;i++){
            sm=nums[i]+nums[i+1];
            if(mp[sm])
                return 1;
            mp[sm]=1;
        }return 0;
    }
};