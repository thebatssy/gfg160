// Problem: Search in a Row-Column Sorted

// User function template for C++
class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        int m = mat.size(), n = mat[0].size();
        int row = 0, col = n-1;
        
        while (row < m && col >= 0){
            if (x == mat[row][col]) return true;
            else if (x > mat[row][col]) row++;
            else col--;
        }
        return false;
    }
};