// https://leetcode.com/problems/combinations

class Solution {
public:
    vector<vector<int>>res;
    vector<vector<int>>f(int &n,int &k){
        if(n==0){
          return{{}};
        }
        int tmp=n;
        n--;
        vector<vector<int>> temp=f(n,k);
         int fix=temp.size();
        for(int i=0;i<fix;i++){
          if(temp[i].size()+1==k){
              vector<int>m=temp[i];
              temp[i].push_back(tmp);
              temp.push_back(m);
              res.push_back(temp[i]);
          } else if(temp[i].size()<k)  {
              vector<int>m=temp[i];
               temp[i].push_back(tmp);
               temp.push_back(m);
          }   
        }
        return temp;
    }
    
    vector<vector<int>> combine(int n, int k) {
          f(n,k);
        return res;
    }
};