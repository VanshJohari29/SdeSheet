 // Brute force approach traversing the matrix and searching for a target
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size(),cols=matrix[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==target)
                    return true;
            }
        }
        
        return false;
        
    }
};
//Using Binary Search 
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int rows=matrix.size() , cols=matrix[0].size();
        int lo = 0;
        if(!matrix.size()) return false;
        int hi = (matrix.size() * matrix[0].size()) - 1;
        
        while(lo <= hi) {
            int mid = (lo + (hi - lo) / 2);
            if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] == target) {
                return true;
            }
            if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] < target) {
                lo = mid + 1;
            }
            else {
                hi = mid - 1;
            }
        }
        return false;
        
    }
};
