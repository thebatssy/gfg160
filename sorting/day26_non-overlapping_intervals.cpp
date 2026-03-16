// Problem: Non-overlapping intervals

class Solution {
  public:
    int minRemoval(vector<vector<int>> &intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end(), [](auto &a, auto &b){
            return a[1] < b[1];
        });

        int cnt = 0, freeTime = -1e9;
        for (int i = 0; i < n; i++){
            if (freeTime <= intervals[i][0]){
                cnt++;
                freeTime = intervals[i][1];
            }
        }
        return n - cnt;
    }
};