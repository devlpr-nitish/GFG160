class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Code here
        
        unordered_map<int, int> mp;
        int n = arr.size();
        int count = 0;
        for(int i = 0; i < n; i++){
            int com = target - arr[i];
            count += mp[com];
            mp[arr[i]]++;
        }
        
        return count;
    }
};
