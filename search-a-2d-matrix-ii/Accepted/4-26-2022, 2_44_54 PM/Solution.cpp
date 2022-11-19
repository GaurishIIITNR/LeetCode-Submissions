// https://leetcode.com/problems/search-a-2d-matrix-ii

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix[0].size();i++)
            {
            if(matrix[0][i]>target)
                return 0;
            int low=0,high=matrix.size()-1;
            while(low<high){
                int mid=low+(high-low+1)/2;
                    if(matrix[mid][i]<=target)
                        low=mid;
            else
                high=mid-1;
            }
            if(matrix[low][i]==target)
                return 1;
        }
        return 0;
    }
};