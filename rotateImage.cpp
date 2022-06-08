/* By observing both the resultant and input matrix we can see a relation that the reverse of 1 column of input matrix is same as 1 row of resultant matrix , so from here we can conclude that we have to do the transpose input matrix  and reverse each row*/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
  //transposing the matrix
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      swap(matrix[i][j], matrix[j][i]);
    }
  }
  //reversing each row of the matrix
  for (int i = 0; i < n; i++) {
    reverse(matrix[i].begin(), matrix[i].end());
  }
        
    }
};
