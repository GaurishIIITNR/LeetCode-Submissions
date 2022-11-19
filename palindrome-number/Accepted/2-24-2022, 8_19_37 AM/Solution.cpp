// https://leetcode.com/problems/palindrome-number

class Solution {
public:
    bool isPalindrome(int x) {
       long long int sm=0,d=x,rem;
        while(x>0)
        {
           rem=x%10;
            x=x/10;
           sm=sm*10+rem; 
        }
        if(sm==d)
        return 1;
        else
         return 0;
    }
};