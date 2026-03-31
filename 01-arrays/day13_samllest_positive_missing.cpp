// Problem: Smallest Positive Missing

class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        // -3 1 1 2 4 7
        int ans = 1;
        for (int i = 0; i < n; i++){
            if (arr[i] < ans) continue;
            if (arr[i] == ans) ans++;
            else if (arr[i] > ans) return ans;
        }
        return ans;
    }
};