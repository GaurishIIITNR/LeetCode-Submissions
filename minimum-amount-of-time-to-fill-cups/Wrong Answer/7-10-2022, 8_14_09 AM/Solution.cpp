// https://leetcode.com/problems/minimum-amount-of-time-to-fill-cups

class Solution {
public:
    int fillCups(vector<int>& amount) {
      int res=0;
      sort(amount.begin(),amount.end());
         if(amount[0]+amount[1]<=amount[2]){
          return amount[2];
      }
      res=amount[0];
      amount[1]-=amount[0]/2;
       amount[2]-=amount[0]-(amount[0]/2);
        res+=min(amount[1],amount[2]);
         res+=amount[1]-min(amount[1],amount[2]);
         res+=amount[2]-min(amount[1],amount[2]);
        return res;
    }
};