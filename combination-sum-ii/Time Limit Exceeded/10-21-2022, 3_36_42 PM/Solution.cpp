// https://leetcode.com/problems/combination-sum-ii

class Solution {
public:
    set<vector<int>>res;
    void f(int i,vector<int>&v,int tar,vector<int>cnb){
        // Base
        if(i==v.size()){
            if(tar==0){
                res.insert(cnb);
                return;
            }
            return;
        } 
        if(tar==0){
            res.insert(cnb);
            return;
        } 
        // Recursive
        f(i+1,v,tar,cnb);
        cnb.push_back(v[i]);
        f(i+1,v,tar-v[i],cnb);
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        f(0,candidates,target,{});
        vector<vector<int>>re(res.begin(),res.end());
        return re;
    }
};