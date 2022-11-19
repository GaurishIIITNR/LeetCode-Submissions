// https://leetcode.com/problems/partition-equal-subset-sum

class Solution {
public:
    bool f(vector<int>& v,int sm,int n){
        // Base
        if(n==0 ){
            if(sm==0)return 1;
            return 0;
        }
        // Recursive
        if(sm-v[n-1]>=0)
        return f(v,sm-v[n-1],n-1)|f(v,sm,n-1);
        else return f(v,sm,n-1);
    }
    bool canPartition(vector<int>& nums) {
        int sm=0;
        for(int i=0;i<nums.size();i++)sm+=nums[i];
        if(sm%2)return 0;
        else 
            return f(nums,sm/2,nums.size());
        
    }
};