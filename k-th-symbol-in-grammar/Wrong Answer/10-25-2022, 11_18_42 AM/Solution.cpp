// https://leetcode.com/problems/k-th-symbol-in-grammar

class Solution {
public:
    int kthGrammar(int n, int k) {
        // Base
         if(k==1)
             return 0;
        // Recursive
        int v= kthGrammar(n-1,k/2);
        if(k%2==0)return 1-v;
        return v;
    }
};