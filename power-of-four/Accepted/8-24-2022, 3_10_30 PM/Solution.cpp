// https://leetcode.com/problems/power-of-four

class Solution {
public:
    bool isPowerOfFour(int n) {
       if(n<=0) return 0;
        
        return log2(n)==(int)log2(n) && ((int)log2(n) %2==0);
    }
};