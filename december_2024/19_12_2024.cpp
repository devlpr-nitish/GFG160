class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // Your code goes here
        
        int n = arr.size();
        
        int l = 0, r = n - 1;
        
        while(l <= r){
            int mid = l + (r - l)/2;
            
            int missing  = arr[mid] - (mid + 1);
            
            if(missing < k){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        
        return l + k;
    }
};
