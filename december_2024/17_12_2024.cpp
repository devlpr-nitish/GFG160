
class Solution {
  public:

    int aggressiveCows(vector<int> &stalls, int k) {

        // Write your code here
        int n = stalls.size();
        
        sort(stalls.begin(), stalls.end());
        int l = 1;
        int r = stalls[n-1] - stalls[0];
        
        while(l <= r){
            int mid = l + (r - l)/2;
            
            // mid distance to places k cows
            if(placeCows(stalls, k,mid)){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        
        return r;
    }
    
    bool placeCows(vector<int> & stalls, int k, int dis){
        int n = stalls.size();
        int prevCow = stalls[0];
        
        int cows = 1;
        
        for(int i = 1; i < n; i++){
            if((stalls[i] - prevCow) >= dis){
                cows++;
                prevCow = stalls[i];
            }
            
            // if all cows placed
            if(cows >= k){
                return true;
            }
        }
        
    
        return false;
    }
};
