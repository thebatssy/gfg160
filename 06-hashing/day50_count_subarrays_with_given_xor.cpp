// Problem : Count Subarrays with given XOR

class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        unordered_map<int,int> mp;
        int prefXor = 0;
        long cnt = 0;
        
        for (int ele: arr){
            prefXor ^= ele;
            if (prefXor == k) cnt++;
            if (mp.find(prefXor^k) != mp.end())
                cnt += mp[prefXor^k];
            mp[prefXor]++;    
        }
        return cnt;
    }
};