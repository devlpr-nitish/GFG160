
class Solution {
  public:
    int findMin(vector<int>& arr) {
        // complete the function here
        
        int l = 0, r = arr.size()-1;
        int res = INT_MAX;
        while(l <= r){ // T.C. O(long n)
            // calculating mid
            int mid = l + (r - l)/2;
            
            // if mid element is smaller or equal to right most element
            // we move right pointer to mid - 1
            // and updating the mid element with current minimum if it is minimum
            if(arr[mid] <= arr[r]){
                r = mid - 1;
                res = min(res, arr[mid]);
            }else{
            // if mid is greater than left most element
            // we are moving the left pointer to mid + 1
            // and updating the mid element with current minimum if it is minimum
                res = min(res, arr[mid]);
                l = mid + 1;
            }
        }
        
        return res;
    }
};
