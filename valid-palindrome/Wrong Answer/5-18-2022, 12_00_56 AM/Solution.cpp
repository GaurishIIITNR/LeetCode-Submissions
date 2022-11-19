// https://leetcode.com/problems/valid-palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
        for(auto x:s){
            if(x>=65 && x<=90)s1+=(char)(x+32);
            else if(x>=97 && x<=122)s1+=x;
        }

       for(int i=0;i<s1.length();i++){
           if(s1[i]!=s1[s1.length()-i-1])return 0;
       }
       return 1;
    }
};