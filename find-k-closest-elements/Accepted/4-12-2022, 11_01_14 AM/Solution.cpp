// https://leetcode.com/problems/find-k-closest-elements

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
          vector<int>res;
       // vector<int>diff;
        int mn=INT_MAX;int mni,i=0;
        for(auto y:arr)
          { 
            if(mn>abs(y-x))
           { mn=abs(y-x);
            mni=i;}
            i++;
        }
        res.push_back(arr[mni]);
        int cnt=1;
        i=mni-1;int j=mni+1;
        while(cnt<k)
        {
            if(i>=0 && j<arr.size())
            {
                if(abs(arr[i]-x)<=abs(arr[j]-x))
                {
                     res.push_back(arr[i]);
                    i-=1;
                    cnt++;
                }
                else if(abs(arr[i]-x)>abs(arr[j]-x))
                {
                     res.push_back(arr[j]);
                    j+=1;
                    cnt++;
                }
            }
            else if(i>=0)
            {
                     res.push_back(arr[i]);
                    i-=1;
                    cnt++; 
            }
            else
            {
                   res.push_back(arr[j]);
                    j+=1;
                    cnt++;
            }
        }
        sort(res.begin(),res.end());
     return res;
       
    }
};