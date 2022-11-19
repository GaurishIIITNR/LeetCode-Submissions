// https://leetcode.com/problems/remove-duplicates-from-sorted-array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       set<int>st;
        for(auto x:nums)
         st.insert(x);
        nums.clear();
        for(auto x:st)
         nums.push_back(x);
        return st.size();
    }
};