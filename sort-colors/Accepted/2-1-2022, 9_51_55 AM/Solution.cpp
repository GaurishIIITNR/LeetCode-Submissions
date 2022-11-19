// https://leetcode.com/problems/sort-colors

class Solution {
public:
    void sortColors(vector<int>& nums)
    {
         vector<int>v(3,0);
        for(int i=0;i<nums.size();i++)
            v[nums[i]]+=1;
        for(int i=0;i<v[0];i++)
            nums[i]=0;
         for(int j=v[0];j<(v[0]+v[1]);j++)
             nums[j]=1;
          for(int i=(v[1]+v[0]);i<(v[0]+v[1]+v[2]);i++)
              nums[i]=2;
    }
};