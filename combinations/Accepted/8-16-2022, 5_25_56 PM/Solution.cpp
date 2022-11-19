// https://leetcode.com/problems/combinations

class Solution {
public:
    vector<vector<int>>res;
    vector<vector<int>>f(int n,int k){
        if(n==0){
          return{{}};
        }
        int tmp=n;
        n--;
        vector<vector<int>> temp=f(n,k);
        vector<vector<int>> temp1;
        for(auto &x:temp){
            temp1.push_back(x);
            x.push_back(tmp);
            if(x.size()==k)res.push_back(x);
            temp1.push_back(x);
        }
        return temp1;
    }
    
    vector<vector<int>> combine(int n, int k) {
          f(n,k);
        return res;
    }
};