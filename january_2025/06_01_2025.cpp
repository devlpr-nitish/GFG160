
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        if(n < 2)
            return {};
        
        sort(arr.begin(), arr.end());
        int l = 0, r = n - 1;
        int closestSum = INT_MAX;
        int maxAbsDiff= -1;
        vector<int> res;
        while(l < r){
            int sum = arr[l] + arr[r];
            
            int diff = abs(target - sum);
            
            if(diff < abs(target - closestSum) || diff == abs(target - closestSum) && 
            arr[r] - arr[l] > maxAbsDiff){
                maxAbsDiff = arr[r] - arr[l];
                closestSum = sum;
                res = {arr[l], arr[r]};
            }
            
            if(sum < target){
                l++;
            }else{
                r--;
            }
                
        }
        
        return res;
    }
};