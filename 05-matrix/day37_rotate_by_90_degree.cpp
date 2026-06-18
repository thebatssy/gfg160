// Problem: Rotate by 90 degree

class Solution {
  public:
    // 270 clockwise or 90 anticlockwise = transpose + reverse col
    void rotateMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        for (int i = 0; i < n; i++){
            for (int j = 0; j <= i; j++)
                swap(matrix[i][j], matrix[j][i]);
        }
        
        for (int j = 0; j < n; j++){
            for (int i = 0; i < n/2; i++)
                swap(matrix[i][j], matrix[n-i-1][j]);
        }
    }
};