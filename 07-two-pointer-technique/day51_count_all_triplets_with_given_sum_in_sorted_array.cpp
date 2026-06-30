// Problems : Count all triplets with given sum in sorted array

class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
        int n = arr.size();
        int count = 0;
        
        for (int i = 0; i < n-2; i++){
            int j = i+1, k = n-1;
            while (j < k){
                int sum = arr[i] + arr[j] + arr[k];
                
                if (sum < target) j++;
                else if (sum > target) k--;
                else {
                    count++;
                    int temp = j+1;
                    while (temp < k && arr[temp] == arr[temp-1]){
                        count++;
                        temp++;
                    }
                    k--;
                }
            }
        }
        return count;
    }
};