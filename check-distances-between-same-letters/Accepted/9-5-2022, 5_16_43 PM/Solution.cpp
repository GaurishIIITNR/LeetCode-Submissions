// https://leetcode.com/problems/check-distances-between-same-letters

class Solution {
public:
    bool checkDistances(string s, vector<int>& d) {
        int n=s.length();
        vector<pair<char,int>>vp;
        for(int i=0;i<n;i++){
            vp.push_back({s[i],i});
        }sort(vp.begin(),vp.end());
        for(int i=0;i<n;i+=2){
            if(d[vp[i].first-'a']!=(max(vp[i].second,vp[i+1].second)-min(vp[i].second,vp[i+1].second))-1)
                return 0;
        }
        return 1;

    }
};