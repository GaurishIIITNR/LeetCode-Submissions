// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution {
public:
    int strStr(string haystack, string needle)
    {
     if(needle=="")
            return 0;
     else
     {
         for(int i=0;i<haystack.size()-(needle.size()-1);i++)
         { 
             if(haystack.substr(i,needle.size())==needle)
              return i;
         }
            
    }
        return -1;
   }
};