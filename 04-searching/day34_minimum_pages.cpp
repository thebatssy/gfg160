// Problem: Allocate Minimum Pages

class Solution {
  public:
    bool isValid(vector<int> &arr, int n, int k, int max){
        int stud = 1, pages = 0;
        
        for (int i = 0; i < n; i++){
            if (arr[i] > max) return false;
            
            if (pages + arr[i] <= max) pages += arr[i];
            else {
                stud++;
                pages = arr[i];
            }
        }
        
        return (stud > k) ? false : true; 
    }
    
    int findPages(vector<int> &arr, int k) {
        int sum = 0, n = arr.size();
        
        if (n < k) return -1;
        
        for (int i = 0; i < n; i++) sum += arr[i];
        
        int st = 0, end = sum, ans = -1;
        
        while (st <= end){
            int mid = st + (end-st)/2;
            if (isValid(arr, n, k, mid)){
                ans = mid;
                end = mid-1;
            } 
            else st = mid+1;
        }
        return ans;
    }
};