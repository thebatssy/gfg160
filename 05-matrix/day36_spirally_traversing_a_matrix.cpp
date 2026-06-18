// Problem: Spirally travelling a matrix

class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        int m = mat.size(), n = mat[0].size();
        int sRow = 0, eRow = m-1;
        int sCol = 0, eCol = n-1;
        vector<int> ans;
        
        while(sRow <= eRow && sCol <= eCol){
            for(int j = sCol; j <= eCol; j++) ans.push_back(mat[sRow][j]);
            
            for(int i = sRow+1; i <= eRow; i++) ans.push_back(mat[i][eCol]);
            
            if (sRow < eRow){
                for(int j = eCol-1; j>= sCol; j--) ans.push_back(mat[eRow][j]);
            }
            
            if (sCol < eCol){
                for(int i = eRow-1; i > sRow; i--) ans.push_back(mat[i][sCol]);
            }
            
            sRow++; sCol++;
            eRow--; eCol--;
        }
        return ans;
    }
};