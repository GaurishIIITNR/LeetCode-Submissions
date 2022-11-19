// https://leetcode.com/problems/subsets

class Solution {
public:
    // from back 
    vector<vector<int>> subsets(vector<int>&nums) {
        // base case 
       if(nums.size()==0){
           return {{}};
       } 
        //recursive step
        int tmp=nums[0];
        nums.erase(nums.begin());
        vector<vector<int>>res=subsets(nums);
        vector<vector<int>>res1;
        for(auto x:res){
            res1.push_back(x);
        }
        for(auto &x:res){
            x.push_back(tmp);
            res1.push_back(x);
        }
        return res1;
    }
};