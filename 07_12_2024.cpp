
class Solution {
  public:
    // Function to count inversions in the array.
    int inversionCount(vector<int> &arr) {
        // Your Code Here
        return inversion(arr,0,arr.size()-1);
    }
    
    int inversion(vector<int> &arr,int l, int r ){
        
        int count = 0;
        if(l < r){
            int mid = l + (r - l)/2;
            
            count += inversion(arr, l, mid);
            count += inversion(arr,mid+1,r);
            count += merge(arr, l , mid, r);
        }
        
        return count;
    }
    
    int merge(vector<int> &arr, int l, int mid, int r){
        
        //length of first array
        int n1 = mid - l + 1;
        //length of second array
        int n2 = r - mid;
        
        vector<int> left (n1,0);
        vector<int> right(n2,0);
        
        
        // fill the both arrays(left, right) with their corresponding values
        
        for(int i = 0; i < n1; i++){
            left[i] = arr[l + i];
        }
        
        for(int i = 0; i < n2; i++){
            right[i] = arr[mid + 1 + i];
        }
        
        // now merge the both array in sorted order to the main array (arr)
        int i = 0, j = 0;
        int k = l;
        int count = 0;
        while(i < n1 && j < n2){
            
            if(left[i] <= right[j]){ // no inversion 
                arr[k++] = left[i++];
            }else{
                // in  case of inversion
                arr[k++] = right[j++];
                //counting the inversion
                count+= n1 - i;
            }
        }
        
        // if any of the array left with elements
        
        while(i < n1){
            arr[k++] = left[i++];
        }
        
        while(j < n2){
            arr[k++] = right[j++];
        }
        
        return count;
    }
    
};