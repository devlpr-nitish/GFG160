
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        
        int n = arr.size();
        vector<int> res;
        
        int i = 0;
        int j = 0;
        int sum = 0;
        
        while(j < n){
            sum += arr[j];
            
            while(i < j && sum > target){
                sum -= arr[i++];
            }
                
            if(sum == target){
                res = {i+1,j+1};
                return res;
            }
            j++;
        }
        
        return {-1};
    }
};

