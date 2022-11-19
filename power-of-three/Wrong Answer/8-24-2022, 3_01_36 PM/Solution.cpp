// https://leetcode.com/problems/power-of-three

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)return 0;
        return log(n)/log(3)==(int)(log(n)/log(3));
    }
};