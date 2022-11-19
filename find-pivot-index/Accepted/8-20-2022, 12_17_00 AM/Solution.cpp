// https://leetcode.com/problems/find-pivot-index

class Solution {
public:
    int pivotIndex(vector<int>& v) {
        int sm=0,sm1=0;
        for(int i=0;i<v.size();i++){
           sm+=v[i];
        }
        for(int i=0;i<v.size();i++){
            if(sm1==sm-sm1-v[i])return i;
            sm1+=v[i];
        }
        return -1;
    }
};