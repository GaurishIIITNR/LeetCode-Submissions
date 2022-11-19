// https://leetcode.com/problems/find-the-town-judge

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& t) {
        vector<int>vi(n+1,0);
        vector<int>adj[n+1];
        map<int,bool>mp;
        for(auto x:t){
            mp[x[0]]=1;
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        for(int i=0;i<=n;i++){
            if(adj[i].size()==n-1 && mp[i]==0 && i)return i;
        }
        return -1;
    }
};