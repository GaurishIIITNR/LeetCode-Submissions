// https://leetcode.com/problems/isomorphic-strings

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>mp;
        for(int i=0;i<s.length();i++){
            if(mp[s[i]]==0){
                mp[s[i]]=t[i];
            }else{
               if(mp[s[i]]!=t[i]) return 0;
            }
        }return 1;
        // sort(v.begin(),v.end());
        // sort(v1.begin(),v1.end());
        // // if(v1==v)return 1;
        // return 0;
    }
};