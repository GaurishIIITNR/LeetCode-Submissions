// https://leetcode.com/problems/combinations

class Solution {
public:
    vector<vector<int>>res;
    void f(int start,int end,int k,vector<int>conti){
        // base
        if(end-start+1<k-conti.size())return;
        if(conti.size()==k){
            res.push_back(conti);
            return;
        }
        if(start>end)return;
        // Recursion
        f(start+1,end,k,conti);
        conti.push_back(start);
        f(start+1,end,k,conti);
    }
    vector<vector<int>> combine(int n, int k) {
        f(1,n,k,{});
        return res;
    }
};