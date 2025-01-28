
class Solution {
  public:
    vector<string> findPermutation(string &s) {
        // Code here there
        set<string> result;
        solve(s, 0, result);
        return vector<string>(result.begin(), result.end());
    }
    
    void solve(string &s, int start, set<string> &res){
        if(start == s.length()){
            res.insert(s);
            return;
        }
        
        for(int i = start; i < s.length(); i++){
            swap(s[start], s[i]);
            solve(s, start + 1, res);
            swap(s[start], s[i]);
        }
        
        
    }
};

