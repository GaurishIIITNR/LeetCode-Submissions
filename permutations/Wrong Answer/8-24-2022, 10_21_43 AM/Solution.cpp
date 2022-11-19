// https://leetcode.com/problems/permutations

class Solution {
public:
    vector<vector<int>>res;
    void f(vector<int>&v, vector<int>conti,vector<int>unused){
        //Base condition
        if(v.size()==0){
          //  for(auto &x:unused){
            //    cout<<x<<" ";
          //  } cout<<endl;
            res.push_back(conti);
            return;
        }
        //Recursive step
        int tmp=v[0];
        v.erase(v.begin());
        vector<int>unused1=unused;
        unused.push_back(tmp);
        f(v,conti,unused);
        conti.push_back(tmp);
        f(v,conti,unused1);
        return;
    }
    vector<vector<int>> permute(vector<int>& v) {
        vector<int>r1,r2;
        f(v,r1,r2);
        return res;
    }
};