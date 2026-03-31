// Problem: Move all zeroes to end of array
// Link: https://www.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1

class Solution {
  public:
    void pushZerosToEnd(vector<int>& vec) {
        int n = vec.size();
        int idx = 0;
        
        for(int i = 0; i < n; i++){
            if(vec[i] != 0){
                swap(vec[i], vec[idx]);
                idx++;
            }
        }
    }
};