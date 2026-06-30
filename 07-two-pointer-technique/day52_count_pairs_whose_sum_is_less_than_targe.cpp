// Problem : Count Pairs whose sum is less than target

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        sort(arr.begin(), arr.end());
        int cnt = 0;
        int i = 0, j = arr.size()-1;
        while (i < j){
            int sum = arr[i] + arr[j];
            
            if (sum < target){
                cnt += (j-i);
                i++;
            } 
            else j--;
        }
        return cnt;
    }
};