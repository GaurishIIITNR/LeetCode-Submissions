// https://leetcode.com/problems/partition-equal-subset-sum

class Solution {
public:
    int dp[201][10002];
    bool f(vector<int>& v,int sm,int n){
        // Base
        if(n==0 ){
            if(sm==0)return 1;
            return 0;
        }
        if(dp[n][sm]!=-1)return dp[n][sm];
        
        // Recursive
        if(sm-v[n-1]>=0)
        return dp[n][sm]=f(v,sm-v[n-1],n-1)|f(v,sm,n-1);
        else return dp[n][sm]= f(v,sm,n-1);
    }
    bool canPartition(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int sm=0;
        for(int i=0;i<nums.size();i++)sm+=nums[i];
        if(sm%2)return 0;
        else 
            return f(nums,sm/2,nums.size());
        
    }
};