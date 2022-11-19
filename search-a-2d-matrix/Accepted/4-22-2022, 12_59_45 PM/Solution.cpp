// https://leetcode.com/problems/search-a-2d-matrix

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //matrix[i][j]>target
        //series--> FFFFFTTTTTT   last F
      int m=matrix.size(),n=matrix[0].size();
        vector<int>v(m*n);
        int k=0;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
              {  v[k]=matrix[i][j]; k++;}
        int low=0,high=m*n-1;
        while(low<high)
        { 
            int mid=low+(high-low+1)/2;
         
            if(v[mid]>target)
                high=mid-1;
            else
                low=mid;     
        }
      
        if(v[low]==target)
            return 1;
        else
            return 0;
    }
};