class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        
        for(int i = 0; i < n; i++){
            if(x < mat[i][0] && x > mat[i][m-1]){
                continue;
            }else{
                if(binarySearch(mat[i], x,m)){
                    return true;
                }
            }
        }
        return false;
    }
    
    bool binarySearch(vector<int> &arr, int target, int m){
        
        int l = 0;
        int r = m - 1;
        
        while(l <= r){
            int mid = l + (r - l)/2;
            
            if(arr[mid] == target){
                return true;
            }else if(arr[mid] < target){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        return false;
    }
};
