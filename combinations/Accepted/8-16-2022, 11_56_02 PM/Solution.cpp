// https://leetcode.com/problems/combinations

class Solution {
public:
    vector<vector<int>>f(int start, int end, int k){
        // base
        
        if(start>end){
            if(k==0)return {{}};
            return{};
        }
        if(k==0)return {{}};
        
        //Recursive
                vector<vector<int>>temp=f(start+1,end,k-1);
        vector<vector<int>>c2=f(start+1,end,k);
        vector<vector<int>>c1=temp;
        for(auto &x:c1){
          x.push_back(start+1);
        }for(auto x:c2){
            c1.push_back(x);
        }
        return c1;
    }
    vector<vector<int>> combine(int n, int k) {
       return f(0,n-1,k);
    }
};