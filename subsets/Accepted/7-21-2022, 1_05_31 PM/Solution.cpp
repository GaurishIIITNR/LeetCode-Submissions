// https://leetcode.com/problems/subsets

class Solution {
public:
    //from start choose that or not choose
    //ex- 2,4 choose 2 or not and choose 4 or not
    vector<vector<int>>f(vector<int> nums,vector<int> conti, vector<vector<int>>& res){
        //base 
        if(nums.size()==0){
          res.push_back(conti);
            return res;
        }
        
        int tmp=nums[0];
        nums.erase(nums.begin());
        f(nums,conti,res);
        conti.push_back(tmp);
        return f(nums,conti,res);    
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        return f(nums,{},res);
    }
};