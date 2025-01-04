
class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
        // Code Here
        int n = arr.size();
        int count = 0;
        
        
        for(int i = 0; i < n; i++){
            
            int j = i + 1;
            int k = n - 1;
            
            while(j < k){
                int sum = arr[i] + arr[j] + arr[k];
                
                if(sum == target){
                    int ele1 = arr[j];
                    int ele2 = arr[k];
                    int cnt1 = 0;
                    int cnt2 = 0;
                
                    while(j <= k && arr[j] == ele1){
                        cnt1++;
                        j++;
                    }
                    while(j <= k && arr[k] == ele2){
                        cnt2++;
                        k--;
                    }
                    
                    if(ele1 == ele2){
                        count += (cnt1*(cnt1-1))/2;
                    }else{
                        count += cnt1 * cnt2;
                    }
                }else if(sum < target){
                    j++;
                }else{
                    k--;
                }
            }
        }
        
        return count;
    }
};
