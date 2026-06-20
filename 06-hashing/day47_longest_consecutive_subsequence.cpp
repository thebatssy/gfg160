// Problem : Longest Consecutive Subsequence

class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        unordered_set<int> s(arr.begin(), arr.end());
        int maxCons = 1;
        
        for (int ele: s){
            if (s.find(ele-1) == s.end()){
                int curr = ele;
                int currCons = 1;
                while (s.find(curr+1) != s.end()){
                    curr++;
                    currCons++;
                }
                maxCons = max(maxCons, currCons);
            }
        }
        return maxCons;
    }
};