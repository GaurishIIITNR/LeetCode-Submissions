// https://leetcode.com/problems/combination-sum

class Solution {
public:
    vector<vector<int>>res;
    void f(vector<int>v, int tar,vector<int>cnb){
        // Base
        if(v.size()==0){
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
        cnb.push_back(v[0]);
        f(v,tar-v[0],cnb);
        cnb.pop_back();
        v.erase(v.begin());
        f(v,tar,cnb);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        f(candidates,target,{});
        return res;
    }
};