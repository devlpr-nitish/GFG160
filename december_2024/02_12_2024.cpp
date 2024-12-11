
class Solution {
  public:
    vector<int> search(string& pat, string& txt) {
        // code here
        int n = txt.length();
        int m = pat.length();
        
        int i = 0, j = 0;
        vector<int> res;
        vector<int> lps(m,0);
        // filling lps vector
        getLPS(lps,pat,m);
        
        while(i < n){
            // if both character matches
            if(pat[j] == txt[i]){
                i++;
                j++;
            }
            
            if(j == m){
                res.push_back(i - j);
                j = lps[j-1];
            }else if(pat[j]  != txt[i]){
                if(j != 0){
                    j = lps[j-1];
                }else{
                    i++;
                }
            }
        }
        
        return res;
    }
    
    void getLPS(vector<int> &lps, string &pat, int m){
        int len = 0;
        
        lps[0] = 0;
        
        int i = 1;
        
        while(i < m){
            if(pat[i] == pat[len]){
                len++;
                lps[i] = len;
                i++;
            }else{
                if(len != 0){
                    len = lps[len-1];
                }else{
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }
};