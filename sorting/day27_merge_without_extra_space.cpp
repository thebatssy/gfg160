// Problem: Merge Without Extra Space

class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int m = a.size();
        int n = b.size();
        vector<int> temp;
        int i = 0, j = 0;
        
        while (i < m && j < n){
            if (a[i] <= b[j]) temp.push_back(a[i++]); 
            else temp.push_back(b[j++]);
        }
        
        while (i < m) temp.push_back(a[i++]);
        while (j < n) temp.push_back(b[j++]);
        
        for (int k = 0; k < m; k++) a[k] = temp[k];
        for (int k = 0; k < n; k++) b[k] = temp[k+m];
        
    }
};