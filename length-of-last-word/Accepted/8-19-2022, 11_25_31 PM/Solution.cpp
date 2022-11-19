// https://leetcode.com/problems/length-of-last-word

class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0;bool flag=0;
      for(int i=s.length()-1;i>=0;i--){
          if(s[i]!=' ' && flag==0)
              flag=1;
          if(flag && s[i]==' ')return cnt;
          if(flag)
          cnt++;
      }  
        return cnt;
    }
};