// Problem: Search in a row-wise sorted matrix


class Solution {
  public:
    bool binarySearch(vector<int> vec, int n, int x){
        int st = 0, end = n-1;
        
        while (st <= end){
            int mid = st + (end-st)/2;
            if (x == vec[mid]) return true;
            else if (x > vec[mid]) st = mid+1;
            else end = mid-1;
        }
        return false;
    }
    
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        int m = mat.size(), n = mat[0].size();
        
        for (int i = 0; i < m; i++){
            if (binarySearch(mat[i], n, x)) return true;
        }
        return false;
    }
};