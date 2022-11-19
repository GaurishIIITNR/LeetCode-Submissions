// https://leetcode.com/problems/first-missing-positive

class Solution {
public:
   void swapp(vector<int>& nums,int i){
       if(nums[i]==i+1)
           return;
        if(nums[i]>0 && nums[i]<=nums.size())
           {
            swap(nums[i],nums[nums[i]-1]);
             swapp(nums,i);
           }
       else
           return;
    }
    
    int firstMissingPositive(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
            swapp(nums,i);
        
       for(int i=0;i<nums.size();i++)
       {
           if(nums[i]!=i+1)
               return i+1;
       }
        return nums.size()+1;
    }
    
};