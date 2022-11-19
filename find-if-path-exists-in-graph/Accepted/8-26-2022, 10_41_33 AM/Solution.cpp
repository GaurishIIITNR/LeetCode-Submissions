// https://leetcode.com/problems/find-if-path-exists-in-graph

class Solution {
public:
    bool validPath(int n, vector<vector<int>>& v, int s, int d) {
        vector<int>arr[n];
        for(auto x:v){
            arr[x[0]].push_back(x[1]);
            arr[x[1]].push_back(x[0]);
        }
    queue<int>q;vector<int>vis(n,0);
        q.push(s);
        while(q.size()){
            int node=q.front();
            q.pop();
            vis[node]=1;
            for(auto x:arr[node]){
                if(vis[x]==0){
                q.push(x);
                vis[x]=1;
                    }
                }
            }
        if(vis[d])return 1;
        return 0;
    }
};