// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
       
        int mx=0;
         for(auto x:nums)
             mx=max(x,mx);
           
        //fffffttttt  aim -->finding first t;
        // predicate sm[i]<=threshold;
        
        int low=1,high=mx;
        while(low<high)
        {
            int mid=low+(high-low)/2;
                int sm=0;
                for(auto x:nums)
                    sm+=ceil(x/(float)mid);
            
                if(sm<=threshold)
                    high=mid;
                 else
                     low=mid+1;     
        }
        return low;
        return 0;
    }
};