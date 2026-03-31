// Problem: Anagram

class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        if (s1.length() != s2.length()) return false;
        
        unordered_map<int,int> mp;
        
        for (char c: s1) mp[c]++;
        
        for (char c: s2){
            if (mp.find(c) == mp.end()) return false;
            mp[c]--;
            if (mp[c] < 0) return false;
        }
        return true;
        
    }
};