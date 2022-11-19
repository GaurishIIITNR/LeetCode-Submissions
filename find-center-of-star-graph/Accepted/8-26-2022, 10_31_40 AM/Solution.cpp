// https://leetcode.com/problems/find-center-of-star-graph

class Solution {
public:
    int findCenter(vector<vector<int>>& v) {
        vector<int>arr[v.size()+2];
        for(auto x:v){
            arr[x[0]].push_back(x[1]);
        arr[x[1]].push_back(x[0]);
            }
    for(int i=0;i<v.size()+2;i++){
        if(arr[i].size()==v.size())
            return i;
        }return -1;
    }
};