// Problem: Sorted and Rotated Minimum

class Solution {
  public:
    int findMin(vector<int>& arr) {
        int minVal = INT_MAX;
        
        for (int i = 0; i < arr.size(); i++){
            minVal = min(minVal, arr[i]);
        }
        
        return minVal;
    }
};