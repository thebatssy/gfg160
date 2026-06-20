// Problem : All Triplets with Zero Sum

class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        int n = arr.size();
        vector<vector<int>> ans;
        unordered_map<int,vector<int>> m;
        
        for (int j = 0; j < n-1; j++){
            for (int k = j+1; k < n; k++){
                int target = -(arr[j] + arr[k]);
                auto it = m.find(target);
                if (it != m.end()){
                    for (int i : it->second){
                        if (i < j) ans.push_back({i, j, k});
                    }
                }
            }
            m[arr[j]].push_back(j);
        }
        
        return ans;
    }
};