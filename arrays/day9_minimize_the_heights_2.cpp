// Problem: Minimize the Heights II

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        int n = arr.size();
        if (n == 1) return 0;
        
        sort(arr.begin(), arr.end());
        int ans =  arr[n-1] - arr[0];
        
        int smllst = arr[0] + k, lrgst = arr[n-1] - k;
        
        for (int i = 0; i < n-1; i++){
            int minVal = min(smllst, arr[i+1] - k);
            int maxVal = max(lrgst, arr[i] + k);
            
            if (minVal < 0) continue;
            ans = min(ans, maxVal - minVal);
        }
        return ans;
    }
};