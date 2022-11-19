// https://leetcode.com/problems/find-k-closest-elements

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        int low=0,high=arr.size();
        vector<int>res;
        while(low<high)
        {
            int mid=low+(high-low)/2;
            if(x<arr[mid])
                high=mid;
            else
                low=mid+1;
        }
  for(int i=0;i<k;i++)
    { if(low==0)
    {
        res.push_back( arr[low]);
            arr.erase(arr.begin()+low); 
    }
     else if(low==arr.size()-1)
     {
          res.push_back( arr[low]);
            arr.erase(arr.begin()+low); 
         low-=1;
     }
      else if(abs( arr[low]-x)<abs( arr[low-1]-x))
      {
        res.push_back( arr[low]);
            arr.erase(arr.begin()+low);
          low-=1;
      }
     else if(abs( arr[low]-x)==abs( arr[low-1]-x))
          
     {
         res.push_back( arr[low-1]);
         arr.erase(arr.begin()+low-1);
         low-=1;
     }   
     else
     {
         res.push_back( arr[low-1]);
            arr.erase(arr.begin()+low-1);
         low-=1;
     }
      
    }
        sort(res.begin(),res.end());
          return res;
    }
};