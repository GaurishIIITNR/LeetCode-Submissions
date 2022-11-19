// https://leetcode.com/problems/subsets

class Solution {
public:
    vector<vector<int>>res;vector<int>tmp;
    void f(int i ,vector<int>contri){
        // Base
        if(i==tmp.size()){
            res.push_back(contri);
            return;
         }
        // Recursive 
        f(i+1,contri);
        contri.push_back(tmp[i]);
        f(i+1,contri);
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        tmp=nums;
        f(0,{});
        return res;
    }
};