
class Solution {
  public:
    int search(vector<int>& arr, int key) {
        // complete the function here
        
        int n = arr.size();
        
        int l = 0, r = n - 1;
        
        while(l <= r){
            int mid = l + (r - l)/2;
            
            if(key == arr[mid]){
                return mid;
            }
            
            // Check if the left half is sorted
            if (arr[l] <= arr[mid]) {
                if (key >= arr[l] && key < arr[mid]) {
                    r = mid - 1; // Search in the left half
                } else {
                    l = mid + 1; // Search in the right half
                }
            }
            // Otherwise, the right half must be sorted
            else {
                if (key > arr[mid] && key <= arr[r]) {
                    l = mid + 1; // Search in the right half
                } else {
                    r = mid - 1; // Search in the left half
                }
            }
        }
        
        return -1;
    }
};
