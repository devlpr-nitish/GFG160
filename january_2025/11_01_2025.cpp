class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        int n = s.length();
        unordered_map<char, int> lastoccur;
        int longest = 0;
        int start = 0;
        
        for(int i = 0; i < n; i++){
            char ch = s[i];
            
            // if duplicate present
            if(lastoccur.find(ch) != lastoccur.end() && lastoccur[ch] >= start){
                start = lastoccur[ch] + 1;
            }
            
            lastoccur[ch] = i;
            
            longest = max(longest, i - start + 1);
            
        }
        
        return longest;
    }
};
