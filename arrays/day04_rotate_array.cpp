// Problem: Rotate Array
// Link: https://www.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1

class Solution {
  public:
    void reverse(vector<int>& vec, int start, int end) {
      while (start < end) {
        swap(vec[start], vec[end]);
        start++;
        end--;
      }
    } 
    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& vec, int d) {
        // code here
      int n = vec.size();
      d = d % n; 
      reverse(vec, 0, d-1);  
      reverse(vec, d, n-1);  
      reverse(vec, 0, n-1);    
    }
};
