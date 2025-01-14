
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        
        int n = arr.size();
        
        unordered_map<int, int> mp;
        int sum = 0;
        
        int longest = 0;
        
        for(int i = 0; i < n; i++){
            sum += arr[i];
            
            if(sum == k){
                longest = i + 1;
            }
            int req = sum - k;
            
            if(mp.find(req) != mp.end()){
                longest = max(longest, i - mp[req]);
            }
                
                
            if(mp.find(sum) == mp.end()){
                mp[sum] = i;
            }

        }
        
        
        return longest;
    }
};