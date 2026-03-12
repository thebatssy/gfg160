// Problem: Majority Element - More Than n/3

class Solution {
  public:
    vector<int> findMajority(vector<int>& vec) {
        int n = vec.size();
        unordered_map<int,int> mp;
        vector<int> ans;
        
        for (int ele : vec){
            mp[ele]++;
            if (mp[ele] > n/3 && find(ans.begin(), ans.end(), ele) == ans.end())
    ans.push_back(ele);
            if (ans.size() == 2) break;
        }
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};