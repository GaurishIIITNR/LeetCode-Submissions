// https://leetcode.com/problems/subsets

class Solution {
public:
vector<vector<int>>function(vector<int>& nums ,int i,int end){
       //base
    if(i==end){
        return{{},{nums[i]}};
    }
    //recursion f(arr,0,n-1)=f(arr,1,n-1)+[arr(0)+f(arr,1,n-1)];
     vector<vector<int>>c1=function(nums,i+1,end);
     vector<vector<int>>c2;
     for(auto x:c1){
         c2.push_back(x);
          c2[c2.size()-1].push_back(nums[i]);
         }
     // adding c1 and c2
     vector<vector<int>>res;
       for(auto x:c1)res.push_back(x);
       for(auto x:c2)res.push_back(x);
    return res;
     }
    
    vector<vector<int>> subsets(vector<int>& nums) {
         return function(nums,0,nums.size()-1);
    }
};