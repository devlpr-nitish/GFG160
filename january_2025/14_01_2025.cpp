
class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        int total_sum = 0;
        
        for(int & a : arr){
            total_sum += a;
        }
        
        int curr_sum = 0;
        int equilibrium = -1;
        
        for(int i = 0; i < arr.size(); i++){
            
            if(2*curr_sum == total_sum - arr[i]){
                equilibrium = i;
                break;
            }
            curr_sum += arr[i];
        }
        
        
        return equilibrium;
    }
};

