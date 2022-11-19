// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        
       for(int i=1;true;i++)
       {
           int sm=0;
           for(auto x:nums)
             sm+=ceil(x/(float)i);
           
           if(sm<=threshold)
              {//cout<<i<<"\n";
               return i;  }   
       }
        return 0;
    }
};