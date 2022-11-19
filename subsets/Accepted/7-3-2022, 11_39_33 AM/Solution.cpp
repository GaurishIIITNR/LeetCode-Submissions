// https://leetcode.com/problems/subsets

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        if(nums.size()==0){
            return {{}};
        }
        int tmp=nums[0];
        nums.erase(nums.begin());
     vector<vector<int>>c1=subsets(nums);
        int n=c1.size();
         for(int i=0;i<n;i++){
             vector<int>t=c1[i];
             t.push_back(tmp);
             c1.push_back(t);
         }
        return c1;
    }
};