// https://leetcode.com/problems/length-of-last-word

class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0;
      for(int i=s.length()-1;i>=0;i--){
          if(s[i]==' ')return cnt;
          cnt++;
      }  
        return cnt;
    }
};