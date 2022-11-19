// https://leetcode.com/problems/sqrtx

class Solution {
public:
    int mySqrt(int x) {
        if(x==1) return 1;
     int low=0,high=x/2;
        while(low<high){
            int mid=low+(high-low+1)/2;
                if(mid*mid<=x)
                    low=mid;
                else
                    high=mid-1;
        }
        return low;
        
    }
};