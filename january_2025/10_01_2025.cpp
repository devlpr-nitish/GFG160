class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here.
        int n = arr.size();
        unordered_map<int, int> freq;
        vector<int> res;
        
        int i = 0;
        
        while(i < k){
            freq[arr[i++]]++;
        }
        res.push_back(freq.size());
        
        while(i < n){
            
            // now remove prev element
            int val = arr[i - k];
            freq[val]--;
            
            if(freq[val] == 0){
                freq.erase(val);
            }
            
            // add new element
            int num = arr[i];
            freq[num]++;
            
            res.push_back(freq.size());
            
            i++;
            
        }
        
        return res;
    }
};
