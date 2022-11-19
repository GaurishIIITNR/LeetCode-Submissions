// https://leetcode.com/problems/k-diff-pairs-in-an-array

class Solution {
public:
    int findPairs(vector<int>& nums, int k) 
    {
        sort(nums.begin(),nums.end());
        int cnt=0;
         int dummy=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
           
            for(int j=i+1;j<nums.size();j++)
            {
                 if(dummy==nums[i])
                     break;
                else if(nums[i]+k==nums[j])
                {
                    cnt+=1;
                    dummy=nums[i];
                     break;
                }
                
            }
        }
        return cnt;
    }
};