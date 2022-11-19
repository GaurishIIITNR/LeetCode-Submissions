// https://leetcode.com/problems/combination-sum-ii

class Solution {
public:
    vector<vector<int>>res;
    // map<int,bool>mp;
    vector<int>v;
    void f(int i,int tar,vector<int>cnb){
        // Base
        if(i==v.size()){
            if(tar==0){
                res.push_back(cnb);
                return;
            }
            return;
        } if(tar==0){
            res.push_back(cnb);
            return;
        } if(tar<0)return;
        // Recursive
        for(int j=i+1;j<v.size();j++){
            if(v[j]!=v[i]){
                f(j,tar,cnb);
                break;
            }
        }
        cnb.push_back(v[i]);
        f(i+1,tar-v[i],cnb);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        v=candidates;
        f(0,target,{});
        return res;
    }
};