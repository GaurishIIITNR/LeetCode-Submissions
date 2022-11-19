// https://leetcode.com/problems/permutations

class Solution {
public:
       void f(vector<int> nums,vector<int> conti, vector<vector<int>>& res,vector<int>un){
        //base 
        if(nums.size()==0){
          for(auto x:un){
              conti.push_back(x);
           }
          res.push_back(conti);
            return;
        }
        
        int tmp=nums[0];
        nums.erase(nums.begin());
         vector<int>un1=un;
         un.push_back(tmp);
        f(nums,conti,res,un);
        conti.push_back(tmp);
        f(nums,conti,res,un1);
         return;
    }
    vector<vector<int>> permute(vector<int>& v) {
        vector<int>r1,r3;
        vector<vector<int>>r2;
        f(v,r1,r2,r3);
        return r2;
    }
};