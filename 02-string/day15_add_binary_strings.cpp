// Problem: Add Binary Strings

class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        while (s1.length() < s2.length()) s1 = '0' + s1;
        while (s2.length() < s1.length()) s2 = '0' + s2;
        
        string ans = "";
        int carry = 0;
        
        for (int i = s1.length()-1; i >= 0; i--){
            int bitA = s1[i] - '0';
            int bitB = s2[i] - '0';
            int sum = bitA + bitB + carry;
            ans = char((sum % 2) + '0') + ans;
            carry = sum / 2;
        }
        
        if(carry) ans = '1' + ans;
        
        int i = 0;
        while (i < ans.length() - 1 && ans[i] == '0') i++;
        ans = ans.substr(i);
        
        return ans;
    }
};