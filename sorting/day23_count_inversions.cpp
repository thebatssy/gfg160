// Problem: Count Inversions

class Solution {
  public:
    int merge(vector<int> &arr, int st, int mid, int end){
        vector<int> temp;
        int i = st, j = mid+1;
        int invCount = 0;
        
        while (i <= mid && j <= end){
            if (arr[i] <= arr[j]){
                temp.push_back(arr[i]);
                i++;
            } else {
                temp.push_back(arr[j]);
                j++;
                invCount += (mid-i+1);
            }
        }
        
        while (i<= mid) temp.push_back(arr[i++]);
        while (j <= mid) temp.push_back(arr[j++]);
        
        for (int idx = 0; idx < temp.size(); idx++){
            arr[idx+st] = temp[idx];
        }
        return invCount;
    }
    
    int mergeSortAndCount(vector<int> &arr, int st, int end) {
        if (st < end){
            int mid = st + (end-st)/2;
            
            int leftInvCount = mergeSortAndCount(arr, st, mid);
            int rightInvCount = mergeSortAndCount(arr, mid+1, end);
            
            int invCount = merge(arr, st, mid, end);
            
            return leftInvCount + rightInvCount + invCount;
        }
        return 0;
    }
    
    int inversionCount(vector<int> &arr){
        return mergeSortAndCount(arr, 0, arr.size()-1);
    }
};
