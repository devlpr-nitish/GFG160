
class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        unordered_map<int, int> mp;
        mp[0] = 1;
        
        int pref_sum = 0;
        int count = 0;
        for(int i = 0; i < n; i++){
            // prefix sum
            pref_sum += arr[i];
            // required sum
            int req = pref_sum - k;
            // add number of occurence of req sum
            count += mp[req];
            // update the count of pref sum
            mp[pref_sum]++;
        }
        
        return count;
    }
};

