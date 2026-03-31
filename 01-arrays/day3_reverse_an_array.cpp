// Problem: Reverse an Array
// Link: https://www.geeksforgeeks.org/problems/reverse-an-array/1

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int st = 0, end = arr.size()-1;
        
        while (st < end){
            swap(arr[st], arr[end]);
            st++; end--;
        }
    }
};