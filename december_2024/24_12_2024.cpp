class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        
        int n = mat.size();
        int m = mat[0].size();
        
        int l = 0;
        int r = n*m - 1;
        
        while(l <= r){
            int mid = l + (r - l)/2;
            
            int i = mid / m;
            int j = mid % m;
            
            if(x == mat[i][j]){
                return true;
            }else if(x < mat[i][j]){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        return false;
    }
};
