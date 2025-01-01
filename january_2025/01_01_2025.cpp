
class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
        unordered_map<string, vector<string>> mp;
        
        for(int i = 0; i < arr.size(); i++){
            string temp = arr[i];
            sort(arr[i].begin(), arr[i].end());
            mp[arr[i]].push_back(temp);
        }
        
        vector<vector<string>> res;
        
        for(auto & pair : mp){
            vector<string> &vec = pair.second;
            res.push_back(vec);
        }
        
        return res;
    }
};
