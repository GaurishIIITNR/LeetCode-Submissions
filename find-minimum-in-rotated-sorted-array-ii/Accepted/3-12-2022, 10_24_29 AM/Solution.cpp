// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii

class Solution {
public:
    int findMin(vector<int>& nums) {
     map<int,int>mp;
    for(auto x:nums)
        mp[x]=1;
    for(auto x:mp)
        return x.first;
   return 0; 
    }
};