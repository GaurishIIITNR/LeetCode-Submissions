// https://leetcode.com/problems/next-permutation

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool flag=1;
     for(int i=0;i<nums.size()-1;i++){
         if(nums[i]<nums[i+1]){
            flag=0;
             break;
         }
     }
  if(flag)
         reverse(nums.begin(),nums.end());
else{     
    for(int i=nums.size()-1;i>=0;i--)
    {
        int k=INT_MAX,ind;
        for(int j=i+1;j<nums.size();j++) 
        {  
            if(nums[i]<nums[j]){
               {
                   if(nums[j]<=k)
                   {
                       ind=j;
                       k=nums[j];
                   }
               }
            }
        }
       if(k!=INT_MAX)
        { 
           swap(nums[i],nums[ind]);
           sort(nums.begin()+i+1,nums.end());
           break;
        }
    }
   }
  }
};