// https://leetcode.com/problems/sqrtx

class Solution {
public:
    int mySqrt(int x) {
     int low=0,high=x;
        while(low<high){
            int mid=low+(high-low+1)/2;
                if(mid<=x/mid)
                    low=mid;
                else
                    high=mid-1;
        }
        return low;
        
    }
};