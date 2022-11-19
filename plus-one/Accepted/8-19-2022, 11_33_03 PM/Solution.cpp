// https://leetcode.com/problems/plus-one

class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
        int rem=1;
        for(int i=v.size()-1;i>=0;i--){
            if(v[i]+rem==10){
                v[i]=0;
                rem=1;
            }else{
                v[i]+=rem;
                return v;
            }
        } reverse(v.begin(),v.end());
        v.push_back(1);
        reverse(v.begin(),v.end());
        return v;
    }
};