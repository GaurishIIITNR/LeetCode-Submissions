// https://leetcode.com/problems/k-diff-pairs-in-an-array

class Solution {
public:
    int findPairs(vector<int>& nums, int k) 
    {
        sort(nums.begin(),nums.end());
        int cnt=0;
         int dummy=INT_MIN;
        for(auto &x:nums)
        {
           
            for(auto &y:nums)
            {
                 if(dummy==x)
                     break;
                else if(x+k==y)
                {
                    cnt+=1;
                    dummy=x;
                     break;
                }
                
            }
        }
        return cnt;
    }
};