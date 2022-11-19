// https://leetcode.com/problems/subsets

class Solution {
public:
    vector<vector<int>>res;
    void f(vector<int>& nums,int i,int end,vector<int>conti){
        //base 
        if(i==end){
            res.push_back(conti);
            conti.push_back(nums[i]);
            res.push_back(conti);
            return;
        }
        
        f(nums,i+1,end,conti);
        conti.push_back(nums[i]);
         f(nums,i+1,end,conti);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
      f(nums,0,nums.size()-1,{});
        return res;
    }
};