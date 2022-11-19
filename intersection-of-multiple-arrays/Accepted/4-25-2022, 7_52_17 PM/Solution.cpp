// https://leetcode.com/problems/intersection-of-multiple-arrays

class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int>mp;
        for(auto x:nums)
        {
            for(auto y:x)
             mp[y]++;
                
        }
       vector<int>res;
        for(auto x:mp)
        {
            if(x.second==nums.size())
                res.push_back(x.first);
        }
      return res;
    }
};