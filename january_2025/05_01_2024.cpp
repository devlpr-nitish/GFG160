
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Your code here
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        int l = 0;
        int r = n - 1;
        
        int count = 0;
        while(l < r){
            int sum = arr[l] + arr[r];
            
            if(target > sum){
                count += r - l;
                l++;
            }else{
                r--;
            }
        }
        
        return count;
    }
};
