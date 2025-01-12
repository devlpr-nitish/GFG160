
class Solution {

  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n = arr.size();
        if(n == 1)
            return 0;
        
        
        int l = 0;
        int r = n - 1;
        int res = -1;
        while(l < r){
            res = max(res, ((r - l) * min(arr[r], arr[l])));
            
            (arr[l] <= arr[r]) ? l++ : r--;
        }
        
        return res;
    }
};
