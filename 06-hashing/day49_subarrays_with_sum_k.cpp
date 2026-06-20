// Problem : Subarrays with Sum K

class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        int n = arr.size();
        vector<int> preSum(n, 0);
        
        preSum[0] = arr[0];
        for (int i = 1; i < n; i++){
            preSum[i] = preSum[i-1] + arr[i];
        }
        
        int count = 0;
        unordered_map<int,int> mp;
        for (int j = 0; j < n; j++){
            if (preSum[j] == k) count++;
            
            int val = preSum[j] - k;
            
            if (mp.find(val) != mp.end()){
                count += mp[val];
            }
            mp[preSum[j]]++;
        }
        return count;
    }
};