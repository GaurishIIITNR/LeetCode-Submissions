// https://leetcode.com/problems/subsets

class Solution {
public:
    // Backtracking
    vector<vector<int>> f(vector<int>&nums){
        // Base
        if(nums.size()==0){
            return {{}};
        }
        
        // Recursive
        int tmp=nums[0];
        nums.erase(nums.begin());
        vector<vector<int>>c1=f(nums);
        vector<vector<int>>c2=c1;
        for(auto x:c1){
            x.push_back(tmp);
            c2.push_back(x);
        }
        return c2;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
         return f(nums);
    }
};