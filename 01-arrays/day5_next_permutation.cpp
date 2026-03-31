// Problem: Next Permutation
// Link: https://www.geeksforgeeks.org/problems/next-permutation5226/1

class Solution {
  public:
    void nextPermutation(vector<int>& vec) {
        int idx = -1;
        int n = vec.size();
        
        for (int i = n-2; i >= 0; i--){
            if (vec[i] < vec[i+1]){
                idx = i;
                break;
            }
        }
        
        if (idx == -1){
            reverse(vec.begin(), vec.end());
            return;
        }
        
        for (int i = n-1; i > idx; i--){
            if (vec[i] > vec[idx]) {
                swap(vec[i], vec[idx]);
                break;
            }
        }
        
        reverse(vec.begin() + idx + 1, vec.end());
        return;
    }
};