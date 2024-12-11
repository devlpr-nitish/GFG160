
class Solution {
    
    // you can do this problem using a simple loop and count of the target
    // because we have given array in sorted order that's why we are applying this approach
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        
        // lower bound index means lowest index where target was
        int lbIdx = lowerBound(arr, target); // T.C O(log n)
        // upper bound index means highest index where target was
        int upIdx = upperBound(arr, target); // T.C O(log n)
        
        // what if target not exists in the array
        if(upIdx == -1 || lbIdx == -1 || lbIdx > upIdx)return 0;
        
        // highest index - lowest index + 1 for the number of occurrences of the target element
        // in the array
        return upIdx - lbIdx + 1;
    }
    
    // binary search with a small modification to find the upper or higher occurence of the
    // target in the array
    int upperBound(vector<int> & arr, int target){
        int Idx = -1;
        
        int l = 0;
        int r = arr.size()-1;
        
        while(l <= r){
            int mid = l + (r - l)/2;
            
            if(arr[mid] == target){
                // go till we found the last occurrence of the target
                Idx = mid;
                l = mid + 1;
            }else if(arr[mid] < target){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        
        return Idx;
    }
    
    // binary search with small modification to find the lowest occurence
    // of the target in the array
    int lowerBound(vector<int> &arr, int target){
        
        int Idx = -1;
        
        int l = 0;
        int r = arr.size()-1;
        
        while(l <= r){
            int mid = l + (r - l)/2;
            
            if(arr[mid] == target){
                // go till we found the first occurrence of the target
                Idx = mid;
                r = mid - 1;
            }else if(arr[mid] > target){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        
        return Idx;
    }
};
