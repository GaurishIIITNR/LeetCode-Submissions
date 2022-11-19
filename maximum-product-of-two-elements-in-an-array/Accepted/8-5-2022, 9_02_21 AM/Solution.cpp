// https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array

class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int maxend=-1,maxstart=-1;
        int max=-1;
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if((arr[i]*arr[j])>max){
                    max=arr[i]*arr[j];
                    maxstart=i;
                    maxend=j;
                    
                }
            }
        }
        int ans=(arr[maxend]-1)*(arr[maxstart]-1);
        return ans;
    }
};