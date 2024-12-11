
class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int n = arr.size();
        int l = 0, r = n-1;
        int mid = 0;
        
        
        while(mid <= r){
            if(arr[mid] == 0){
                int temp = arr[l];
                arr[l] = arr[mid];
                arr[mid] = temp;
                l++;
                mid++;
            }else if(arr[mid] == 1){
                mid++;
            }else{
                int temp = arr[r];
                arr[r] = arr[mid];
                arr[mid] = temp;
                r--;
            }
        }
        
        
    }
};