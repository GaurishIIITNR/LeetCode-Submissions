// https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array

class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int maxend=-1,maxstart=-1;
        int maxa=-1,maxb=-1;
        for(auto x:arr){
            if(maxa<x){
                maxb=maxa;
                maxa=x;
                continue;
            }
            else if(maxb<x)maxb=x;
        }
        cout<<maxa<<" "<<maxb<<"\n";
        return (maxa-1)*(maxb-1);
    }
};