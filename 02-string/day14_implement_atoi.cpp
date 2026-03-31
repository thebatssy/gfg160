// Problem: Implement Atoi

class Solution {
  public:
    int myAtoi(string& s) {
        int n = s.length();
        int idx = 0;
        int sign = 1;
        long long ans = 0;
        
        while (idx < n && s[idx] == ' ') idx++;
        
        if (idx < n && s[idx] == '-' || s[idx] == '+'){
            if (s[idx] == '-') sign = -1;
            idx++;
        }
        
        while (idx < n && '0' <= s[idx] && s[idx] <= '9'){
            ans = ans*10 + (s[idx]-'0');
            
            long long val = ans * sign;
            
            if (val > INT_MAX) return INT_MAX;
            if (val < INT_MIN) return INT_MIN;
            
            idx++;
        }
        
        return (int)(ans * sign);
    }
};