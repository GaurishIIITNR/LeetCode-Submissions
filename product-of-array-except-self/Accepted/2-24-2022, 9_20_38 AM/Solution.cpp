// https://leetcode.com/problems/product-of-array-except-self

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        vector<int>v(nums.size());
        vector<int>sufix(nums.size());
         int mult=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            mult*=nums[i];
            sufix[i]=mult;
        }
        mult=1;
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
            v[i]=sufix[i+1];
            else if(i==nums.size()-1)
            v[i]=mult;
            else
            v[i]=mult*sufix[i+1];
            mult*=nums[i];
        }
        return v;
    }
};