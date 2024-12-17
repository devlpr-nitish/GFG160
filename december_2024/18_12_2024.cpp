class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        if(n < k)return -1;
        
        int l = INT_MIN;
        int r = 0;
        
        for(int i = 0; i < n; i++){
            l = max(l, arr[i]);
            r += arr[i];
        }
        
        
        while(l <= r){
            int mid = l + (r - l)/2;
            
            if(k < allocateBooks(arr,k,mid)){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }

        
        return l;
    }
    
    int allocateBooks(vector<int> &arr, int k, int pages){
        
        int student = 1;
        int pagesStudent = 0;
        
        for(int i = 0; i < arr.size(); i++){
            if(pagesStudent + arr[i] <= pages){
                pagesStudent += arr[i];
            }else {
                student++;
                pagesStudent = arr[i];
                
            }
        }
        
        
        return student;
    }
};
