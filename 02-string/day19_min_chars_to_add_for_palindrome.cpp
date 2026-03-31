// Problem: Min Chars to Add for Palindrome

class Solution {
  public:
    vector<int> computeLPS(string &pat){
        int n = pat.length();
        vector<int> lps(n, 0);
        int len = 0, i = 1;
        
        while (i < n){
            if (pat[i] == pat[len]){
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) len = lps[len-1];
                else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        return lps;
        
    }
    
    int minChar(string &s) {
        string rev = s;
        reverse(rev.begin(), rev.end());
        
        string combined = s + "#" + rev;
        
        vector<int>lps = computeLPS(combined);
        
        int longest = lps.back();
        
        return s.length() - longest;
    }
};