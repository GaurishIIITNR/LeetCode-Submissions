// https://leetcode.com/problems/target-sum

class Solution {
public:
    int f(vector<int>&v,int tar,int n){
        // Base
        if(n==-1){
            if(tar==0)return 1;
            return 0;
        }
        // Recursive
        int cnt=f(v,tar-v[n],n-1)+f(v,tar+v[n],n-1);
        return cnt;
        
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return f(nums,target,nums.size()-1);
    }
};