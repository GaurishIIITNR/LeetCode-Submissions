// https://leetcode.com/problems/first-missing-positive

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,bool>mp;
        for(auto x:nums)
            {mp[x]=1;}
        int i;
    for(i=1;i<=500000;i++)
    {
        if(mp[i]==0)
            return i;
    }
        return i;
    }
};