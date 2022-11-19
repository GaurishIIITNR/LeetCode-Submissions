// https://leetcode.com/problems/search-a-2d-matrix-ii

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
           int low=0,high=matrix[0].size()-1;
        while(low<high){
            int mid=low+(high-low+1)/2;
                if(matrix[0][mid]<=target)
                    low=mid;
                else
                    high=mid-1;
            
        }
         if(matrix[0][low]==target)
            return 1;
                    int row=low;
      low=0,high=matrix.size()-1;
        while(low<high){
            int mid=low+(high-low+1)/2;
                if(matrix[mid][row]<=target)
                    low=mid;
                else
                    high=mid-1;
            
        }
       
      if(matrix[low][row]==target)
            return 1;
        return 0;
    }
};