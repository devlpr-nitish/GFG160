
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Complete the function
        int n = arr.size();
        
        int count = 0;
        
        int l = 0;
        int r = n - 1;
        while(l < r){
            int sum = arr[l] + arr[r];
                
                if(sum < target){
                    l++;
                }else if(sum > target){
                    r--;
                }else{
                    int ele1 = arr[l];
                    int ele2 = arr[r];
                    int cnt1 = 0;
                    int cnt2 = 0;
                    
                    while(l <= r && arr[l] == ele1){
                        cnt1++;
                        l++;
                    }
                    
                    while(l <= r && arr[r] == ele2){
                        cnt2++;
                        r--;
                    }
                    
                    if(ele1 == ele2){
                        count += (cnt1 *(cnt1-1))/2;
                    }else{
                        count += cnt1*cnt2;
                    }
                    
                }        
        }
        
        return count;
        
        
    }
};
