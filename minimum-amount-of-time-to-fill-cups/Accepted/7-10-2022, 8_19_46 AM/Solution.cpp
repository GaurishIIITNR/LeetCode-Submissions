// https://leetcode.com/problems/minimum-amount-of-time-to-fill-cups

class Solution {
public:
    int fillCups(vector<int>& amount) {
      int res=0;
      sort(amount.begin(),amount.end());
         if(amount[0]+amount[1]<=amount[2]){
          return amount[2];
      }
      return ceil((amount[0]+amount[1]+amount[2])/2.0);
        return res;
    }
};