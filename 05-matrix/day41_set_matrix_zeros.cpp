// Problem: Set Matrix Zeros

class Solution {
  public:
    void markZero (vector<vector<int>> &mat, int i, int j, int m, int n){
        for (int k = 0; k < n; k++) mat[i][k] = INT_MIN;
        for (int k = 0; k < m; k++) mat[k][j] = INT_MIN;
    }
    
    void setMatrixZeroes(vector<vector<int>> &mat) {
        int m = mat.size(), n = mat[0].size();
        vector<pair<int, int>> zeroes;
        
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                if (mat[i][j] == 0) zeroes.emplace_back(i, j);
            }
        }
        
        for (auto &it : zeroes){
            markZero(mat, it.first, it.second, m, n);
        }
        
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                if (mat[i][j] == INT_MIN) mat[i][j] = 0;
            }
        }
    }
};