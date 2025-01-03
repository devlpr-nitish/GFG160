
class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        unordered_map<int, int> mp;
        
        mp[0] = 1;
        int count = 0;
        int xr = 0;
        
        for(int i = 0; i < n; i++){
            
            xr ^= arr[i];
            int req = xr ^ k;
            
            count += mp[req];
            mp[xr]++;
        }
        
        return count;
        
    }
};
