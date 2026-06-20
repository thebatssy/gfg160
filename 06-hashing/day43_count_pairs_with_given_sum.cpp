// Problem : Count pairs with given sum

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        unordered_map<int,int> freq;
        int ans = 0;
        
        for (int num : arr){
            int complement = target - num;
            
            ans += freq[complement];
            freq[num]++;
        }
        return ans;
    }
};