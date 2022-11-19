// https://leetcode.com/problems/majority-element

class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
      map<int,int>mp;
        for(auto x:nums)
            mp[x]++;
        for(auto y:nums)
        {
            if(mp[y]>(nums.size()/2))
                return y;
        }
        return -1;
    }
};