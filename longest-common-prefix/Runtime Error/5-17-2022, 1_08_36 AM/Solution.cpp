// https://leetcode.com/problems/longest-common-prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        int i=0,flag=1;
        while(1){int j;
            for(j=0;j<strs.size()-1;j++){
            if(strs[j][i]!=strs[j+1][i]){
                flag=0;break;
            }
        }
        if(!flag)break;
        else res+=strs[j][i];
      i++;
       }
        return res;
    }
};