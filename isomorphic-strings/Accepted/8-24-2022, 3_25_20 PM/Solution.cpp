// https://leetcode.com/problems/isomorphic-strings

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,set<char>>mp,mp1;
        for(int i=0;i<s.length();i++){
             mp[s[i]].insert(t[i]);
            mp1[t[i]].insert(s[i]);
        }
        for(auto x:mp){
            if(x.second.size()>1)return 0;
        }for(auto x:mp1){
            if(x.second.size()>1)return 0;
        }
        return 1;
    }
};