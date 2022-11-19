// https://leetcode.com/problems/isomorphic-strings

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int>v(26,0),v1(26,0);
        for(int i=0;i<s.length();i++)v[s[i]-'a']++;
        for(int i=0;i<t.length();i++)v1[t[i]-'a']++;
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        if(v1==v)return 1;
        return 0;
    }
};