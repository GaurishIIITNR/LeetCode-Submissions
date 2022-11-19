// https://leetcode.com/problems/search-a-2d-matrix

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //matrix[i][j]>target
        //series--> FFFFFTTTTTT   last F
      int m=matrix.size(),n=matrix[0].size();
        int low=0,high=m*n-1;
        while(low<high)
        { 
            int mid=low+(high-low+1)/2;
            int i=mid/n;
            int j=mid%n;
            
            if(matrix[i][j]>target)
                high=mid-1;
            else
                low=mid;
                
        }
       int i=low/n;
            int j=low%n;
        if(matrix[i][j]==target)
            return 1;
        else
            return 0;
    }
};