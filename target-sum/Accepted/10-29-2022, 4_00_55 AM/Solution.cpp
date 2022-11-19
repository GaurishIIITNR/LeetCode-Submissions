// https://leetcode.com/problems/target-sum

class Solution {
public:
    int dp[22][2005];
    int f(vector<int>&v,int tar,int n){
        // Base
        if(n==-1){
            if(tar==0)return 1;
            return 0;
        }
        if(dp[n][tar+1000]!=-1)return dp[n][tar+1000];
        // Recursive
        int cnt=0;
        if(tar-v[n]>=-1000)
           cnt+=f(v,tar-v[n],n-1);
        if(tar+v[n]<=1000)
           cnt+=f(v,tar+v[n],n-1);
        return dp[n][tar+1000]=cnt;
        
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        memset(dp,-1,sizeof(dp));
        return f(nums,target,nums.size()-1);
    }
};