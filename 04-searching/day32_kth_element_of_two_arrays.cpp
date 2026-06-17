// Problem:  Kth element of two arrays

class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        int m = a.size(), n = b.size();
        a.resize(m+n);
        
        for(int i = m, j = 0; i < m+n; i++){
            a[i] = b[j++];
        }
        
        sort(a.begin(), a.end());
        return a[k-1];
    }
};