// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii

class Solution {
public:
    int findMin(vector<int>& nums) {
     int mn=INT_MAX;
    for(auto x:nums)
     if(mn>x)
        mn=x;
    return mn;
    }
};