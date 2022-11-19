// https://leetcode.com/problems/sort-the-matrix-diagonally

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
     vector<vector<int>>res=mat,tmp;
        
     for(int i=0;i<mat[0].size();i++){
          vector<int>r;
          int ti=0,tj=i;
          while(ti<mat.size()&&tj<mat[0].size()){
             r.push_back(mat[ti][tj]);
             ti++,tj++;
         }sort(r.begin(),r.end());
         ti=0,tj=i;
         int k=0;
         while(ti<mat.size()&&tj<mat[0].size()){
             res[ti][tj]=r[k];
             ti++,tj++,k++;
         }
     }
     for(int i=1;i<mat.size();i++){
          vector<int>r;
          int ti=i,tj=0;
          while(ti<mat.size()&&tj<mat[0].size()){
             r.push_back(mat[ti][tj]);
             ti++,tj++;
         }sort(r.begin(),r.end());
         ti=i,tj=0;
         int k=0;
         while(ti<mat.size()&&tj<mat[0].size()){
             res[ti][tj]=r[k];
             ti++,tj++,k++;
         }
     }      
          return res;
    }
      
};