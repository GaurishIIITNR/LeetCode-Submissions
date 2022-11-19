// https://leetcode.com/problems/first-missing-positive

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        bool flag=0;int cnt=0;
       for(int i=0;i<nums.size();i++)
       {
           if(nums[i]<=0 && flag==0)
              continue;
           else
             {  
               flag=1;
               if(i-1>=0 && nums[i]==nums[i-1])
                   continue;
             if(nums[i]!=cnt+1)
                 return cnt+1;       
              }
           cnt++;
       }
       return cnt+1;
        
    }
};