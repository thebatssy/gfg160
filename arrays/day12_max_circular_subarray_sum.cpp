// Problem: Max Circular Subarray Sum

class Solution {
  public:
    int maxCircularSum(vector<int> &arr) {
        int n = arr.size();
        int maxSum = arr[0], currMax = arr[0];
        int minSum = arr[0], currMin = arr[0];
        int totalSum = arr[0];
        
        for (int i = 1; i < n; i++){
            currMax = max(arr[i], currMax + arr[i]);
            maxSum = max(maxSum, currMax);
            
            currMin = min(arr[i], currMin + arr[i]);
            minSum = min(minSum, currMin);
            
            totalSum += arr[i];
        }
        
        if (maxSum < 0) return maxSum;
        
        return max(maxSum, totalSum - minSum);
    }
};