// Problem: Second Largest Element
// Link: https://www.geeksforgeeks.org/problems/second-largest3735/1

class Solution {
  public:
    int getSecondLargest(vector<int> &vec) {
        int n = vec.size();
        int largest = -1;
        int secondLargest = -1;
        
        for(int i = 0; i < n; i++){
            if (largest < vec[i] ) largest = vec[i];
        }
        
        for(int i = 0; i < n; i++){
            if (secondLargest < vec[i] && vec[i] != largest)
                secondLargest = vec[i];
        }
        return secondLargest;
    }
};