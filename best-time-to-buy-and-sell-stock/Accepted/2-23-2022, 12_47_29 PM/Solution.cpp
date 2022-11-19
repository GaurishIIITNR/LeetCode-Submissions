// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int mxpro=0,buy=prices[0],prof=0;
          for(int i=0;i<prices.size();i++)
          {
           if(prices[i]<buy)
               buy=prices[i];
          else
              {
                  prof=prices[i]-buy;
                  mxpro=max(prof,mxpro);
              }     
          }
        return mxpro;
        
    }
};