class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        // Your code here
        vector<int> first(26, 0); 

        
        for (char ch : s1) {
            first[ch - 'a']++;
        }
    
        for (char ch : s2) {
            first[ch - 'a']++;
        }
    
        for (int count : first) {
            if (count % 2 != 0) {
                return false;
            }
        }
    
        return true;
    }
};