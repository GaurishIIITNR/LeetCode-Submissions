// https://leetcode.com/problems/longest-common-prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        int mn=1000;
        for(auto x:strs){
           if(mn>=x.length()) mn=x.length();
        }
        int i=0,flag=1;
        while(i<mn){
            int j;
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