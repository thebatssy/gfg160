// Problem: Sort 0s, 1s and 2s

class Solution {
  public:
    void sort012(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size()-1;
        while (mid <= high){
            if (nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++; mid++;
            }
            else if (nums[mid] == 1) mid++;
            else {
                swap(nums[high], nums[mid]);
                high--;
            }
        }
    }
};