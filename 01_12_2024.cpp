class Solution {
  public:
    // Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string &s) {
        // Your code here
        vector<int> alpha(26,0);
        
        for(char &ch : s){
            alpha[ch-'a']++;
        }
        
        for(char &ch : s){
            if(alpha[ch-'a'] == 1){
                return ch;
            }
        }
        
        return '$';
    }
};
