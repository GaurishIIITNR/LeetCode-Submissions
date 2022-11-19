// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution {
public:
    int strStr(string haystack, string needle) {
     if(needle=="")
         return 0;
     else if(haystack.find(needle)==false)
         return -1;
    else
        return haystack.find(needle);
    }
};