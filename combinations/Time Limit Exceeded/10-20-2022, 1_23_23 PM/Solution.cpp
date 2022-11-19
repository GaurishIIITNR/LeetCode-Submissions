// https://leetcode.com/problems/combinations

class Solution {
public:
    // Without Backtracking
    vector<vector<int>>res;
    void f(int i,int j,int k,vector<int>v){
        // Base
        if(v.size()==k){
            res.push_back(v);
            return;
        }
        if(i==j)return;
        // Recursive
        f(i+1,j,k,v);
        v.push_back(i);
        f(i+1,j,k,v);
    }
    vector<vector<int>> combine(int n, int k) {
        f(1,n+1,k,{});
        return res;
    }
};