

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        int n = arr.size();
        int zeros = 0;
        int index = -1;
        
        long long product = 1;
        for(int i = 0; i < n; i++){
            if(arr[i] == 0){
                zeros++;
                index = i;
            }else{
                product *= arr[i];
            }
        }
        
        vector<int> res(n,0);        
        
        if(zeros == 1){
            res[index] = product;
        }else if(zeros == 0){
            for(int i = 0; i < n; i++){
                res[i] = product / arr[i];
            }
        }
        // if we have more than one zeros then overall ans array is zeros
        
        return res;
    }
};
