// https://leetcode.com/problems/permutations

class Solution {
public:
       void f(vector<int> nums,vector<int> conti, set<vector<int>>& res,vector<int>un){
        //base 
        if(nums.size()==0){
          for(auto x:un){
              conti.push_back(x);
           }
          res.insert(conti);
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
        vector<int>r1,r3,r5;
        r5=v;
        reverse(r5.begin(),r5.end());
        set<vector<int>>st;
        vector<vector<int>>r2;
        f(v,r1,st,r3);
        st.insert(r5);
        for(auto x:st)r2.push_back(x);
        //r2.push_back(r5);
        return r2;
    }
};