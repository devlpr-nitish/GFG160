class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        vector<int> left_max(n);
        vector<int> right_max(n);
        
        left_max[0] = arr[0];
        for(int i = 1; i < n; i++){
            left_max[i] = max(left_max[i-1], arr[i]);
        }
        right_max[n-1] = arr[n-1];
        for(int i = n-2; i >= 0; i--){
            right_max[i] = max(right_max[i+1], arr[i]);
        }
        
        
        int trapped_water = 0;
        
        for(int i = 1; i < n -1; i++){
            trapped_water += min(left_max[i] , right_max[i]) - arr[i];
        }
        
        return trapped_water;
    }
};
