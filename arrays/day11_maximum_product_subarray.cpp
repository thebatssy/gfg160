// Problem: Maximum Product Subarray

class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        int n = arr.size();
        int preSum = 1, sufSum = 1;
        int maxProd = INT_MIN, currProd = 0;
        
        for (int i = 0; i < n; i++){
            if (preSum == 0) preSum = 1;
            if (sufSum == 0) sufSum = 1;
            
            preSum *= arr[i];
            sufSum *= arr[n-i-1];
            
            currProd = max(preSum, sufSum);
            maxProd = max(maxProd, currProd);
        }
        
        return maxProd;
    }
};