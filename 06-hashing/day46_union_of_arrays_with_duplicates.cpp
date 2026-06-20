// Problem : Union of Arrays with Duplicates

class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        unordered_set<int> s(a.begin(), a.end());
        for (int ele: b) s.insert(ele);
        return vector<int>(s.begin(), s.end());
    }
};