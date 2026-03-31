// Problem: Search in Rotated Sorted Array

class Solution {
  public:
    int search(vector<int>& nums, int key) {
        int st = 0, end = nums.size()-1;
        
        while (st <= end){
            int mid = st + (end-st)/2;
            
            if (key == nums[mid]) return mid;
            
            if (nums[st] <= nums[mid]){ //left sorted
                if (nums[st] <= key && nums[mid] >= key) end = mid-1;
                else st = mid+1;
            }
            else { // right sorted
                if (nums[mid] <= key && nums[end] >= key) st = mid+1;
                else end = mid-1;
            }
        }
        return -1;
    }
};