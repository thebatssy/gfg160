// Problem: Search Pattern

class Solution {
  public:
    vector<int> computeLPS(string &pat){
        int m = pat.size();
        vector<int> lps(m, 0);
        
        int len = 0;
        int i = 1;
        
        while (i < m){
            if (pat[i] == pat[len]){
                len++;
                lps[i] = len;
                i++;
            } 
            else {
                if (len != 0) len = lps[len-1];
                else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        return lps;
        
    }
    
    vector<int> search(string &pat, string &txt) {
        vector<int> ans;
        int n = txt.size(), m = pat.size();
        if (m == 0 || n < m) return ans;
        
        vector<int> lps = computeLPS(pat);
        int i = 0, j = 0;
        
        while (i < n){
            if (txt[i] == pat[j]){
                i++;
                j++;
                if (j == m){
                    ans.push_back(i - j);
                    j = lps[j -1];
                }
            }
            else {
                if (j != 0) j = lps[j - 1];
                else i++;
            }
        }
        return ans;
    }
};
