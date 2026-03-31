// Problem: Peak element

class Solution {
  public:
    int peakElement(vector<int> &arr) {
        int n = arr.size();
        int st = 0, end = n-1;
        
        while (st <= end){
            int mid = st + (end-st)/2;
            
            int left = (mid == 0) ? INT_MIN : arr[mid-1];
            int right = (mid == n-1) ? INT_MIN : arr[mid+1];
            
            if (arr[mid] > left && arr[mid] > right) return mid;
            else if (arr[mid] < right) st = mid + 1;
            else end = mid - 1;
        }
        return -1;
    }
};