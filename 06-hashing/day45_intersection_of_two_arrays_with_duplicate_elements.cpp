// Problem : Intersection of Two arrays with Duplicate Elements

class Solution {
  public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        vector<int> ans;
        unordered_set<int> s;
        
        for (int ele: a) s.insert(ele);
        
        for (int ele : b) {
            if (s.find(ele) != s.end()){
                ans.push_back(ele);
                s.erase(ele);
            }
        }
        return ans;
    }
};