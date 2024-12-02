class Solution {
  public:
    int minChar(string& s) {
        // Write your code here
        int n = s.length();
        string temp = s;
        reverse(s.begin(), s.end());
        // main strnig + reverse string
        string concatedString = temp + "#" + s;
        
        int len = concatedString.length();
        vector<int> lps(len, 0);
        //fill the lps array
        getLPS(concatedString,lps);
        
        return n - lps[len-1];
    }
    
    void getLPS(string &s,vector<int> &lps){
        int n = s.length();
        
        lps[0] = 0;
        
        int i = 1;
        
        // length of suff and pref
        int len = 0;
        
        while(i < n){
            
            if(s[i] == s[len]){
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