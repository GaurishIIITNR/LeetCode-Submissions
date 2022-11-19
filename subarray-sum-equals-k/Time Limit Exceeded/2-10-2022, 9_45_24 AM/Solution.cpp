// https://leetcode.com/problems/subarray-sum-equals-k

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
         long long  sm=0;
         for(int j=i;j<nums.size();j++)
             {
                 sm+=(long long)nums[j];
                 if(sm==k)
                    {count+=1;}
                     
             }
       }
             return count;
    }
};