// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int mxp=0,pr=0,mn=INT_MAX;
      for(int i=1;i<prices.size();i++)
      {
        if(prices[i-1]<mn)
            mn=prices[i-1];
          pr=prices[i]-mn;
          mxp=max(pr,mxp);
          
      }
        return mxp;
        
    }
};