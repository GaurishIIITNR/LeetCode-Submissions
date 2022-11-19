// https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size(),cnt=0,i;
        for(i=0;i<n-1;i++){
            if(arr[i]==arr[i+1])cnt++;
            else {
                cnt++;
                if(cnt>n/4)return arr[i];
                else cnt=0;
            }
        } return arr[i];
       
    }
};