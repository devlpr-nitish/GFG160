class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        int n = arr.size();
        // sort the array based on their first element
        sort(arr.begin(), arr.end());
        vector<vector<int>> res;
        
        int mn = arr[0][0];
        int mx = arr[0][1];
        
        
        for(int i = 1; i < n; i++){
            int first  = arr[i][0];
            int second = arr[i][1];
            
            // one intevel ended
            if(first > mx){
                res.push_back({mn,mx});
                mn = first;
                mx = second;
            }else if(first <= mx && second > mx){
                mx = second;
            }
            
        }
        
        res.push_back({mn,mx});
        
        return res;
    }
};
