// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days

class Solution {
public:
    
    int fin_day(vector<int>weights,int n)
    {
        int cnt=0;
        int sm=0;
       for(int i=0;i<weights.size();i++)
       {
          sm+=weights[i];
           if(sm>n)
           {
               sm=weights[i];
               cnt++;
           }
           if(sm<=n && i==weights.size()-1)
               cnt++;
       }
        return cnt;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        
        int mx=0;
        int sm=0;
        for(auto x:weights)
        {
            mx=max(x,mx);
            sm+=x;
        }
        
       // return   fin_day(weights,15);
        
       // fffftttt   aim--->first true;
        
        int low=mx,high=sm;
        while(low<high)
        {
            int mid= low+(high-low)/2;
            if( fin_day(weights,mid)<=days)
                high=mid;
            else
                low=mid+1;
        }
         return low;   
        
    }
};