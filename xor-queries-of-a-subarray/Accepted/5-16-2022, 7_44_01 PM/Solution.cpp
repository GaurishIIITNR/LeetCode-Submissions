// https://leetcode.com/problems/xor-queries-of-a-subarray

class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
      int in=0;
        vector<int>res;
        for(int i=0;i<arr.size();i++){
            in=in^arr[i];
           arr[i]=in;
        }
        // for(auto x:arr)cout<<x<<" ";
       for(auto x:queries){
           if(x[0]==0)
           res.push_back(arr[x[1]]);
           else 
            res.push_back(arr[x[1]]^arr[x[0]-1]);
       }
         return res;
    }
};