// https://leetcode.com/problems/combination-sum

class Solution {
public:
    // without backtrack using contribution;
    vector<vector<int>>res;vector<int>v;
    void f(int i, int tar,vector<int>cnb){
        // Base
        if(i==v.size()){
            if(tar==0){
               res.push_back(cnb);
               return;
            }
            return;
        }
        if(tar==0){
            res.push_back(cnb);
            return;
        }
        if(tar<0)return;
        // Recursive
        
        f(i+1,tar,cnb);
        cnb.push_back(v[i]);
        f(i,tar-v[i],cnb);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        v=candidates;
        f(0,target,{});
        return res;
    }
};