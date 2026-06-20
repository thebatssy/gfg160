// Problem : Two Sum - Pair with GIven Sum

class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        unordered_map<int,int> mp;
        int n = arr.size();
        
        for (int i = 0; i < n; i++){
            int first = arr[i];
            int second = target - first;
            
            if (mp.find(second) != mp.end()) return true;
            else mp[first] = i;
        }
        return false;
    }
};