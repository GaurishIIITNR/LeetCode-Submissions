// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0) return {-1,-1};
      // predicate nums[x]<target //ttttfff// aim finding first f
       int l=0,h=nums.size()-1,res;
        while(l<h)
        {
            int m=(l+h)/2;
            if(nums[m]<target)
                l=m+1;
            else
                h=m;
        }
        if(nums[l]==target)
            res=l;
        else return{-1,-1};
    
    //predicate nums[x]<=target //tttttfff //aim to finding last t
   l=0;
   h=nums.size()-1;
    while(l<h)
    {
        int m=l+(h-l+1)/2;
            if(nums[m]<=target)
                l=m;
        else
            h=m-1;
    }
    if(nums[l]<=target)
        return {res,l};
    else
        return {res,-1};
    }
};