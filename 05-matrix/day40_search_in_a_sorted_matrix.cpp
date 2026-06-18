// Problem: Search in a sorted Matrix

class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        int m = mat.size(), n = mat[0].size();
        int ansR = -1;
        
        int sR = 0, eR = m-1;
        while (sR <= eR){
            int midR = sR + (eR-sR)/2;
            
            if (x >= mat[midR][0] && x <= mat[midR][n-1]){
                ansR = midR;
                break;
            } 
            else if (x > mat[midR][n-1]) sR = midR + 1;
            else eR = midR - 1;
        }
        
        if (ansR == -1) return false;
        
        int st = 0, end = n-1;
        while (st <= end){
            int mid = st + (end-st)/2;
            
            if (x == mat[ansR][mid]) return true;
            else if (x > mat[ansR][mid]) st = mid + 1;
            else end = mid - 1;
        }
        return false;
    }
};