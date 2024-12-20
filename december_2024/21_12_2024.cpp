class Solution {
  public:
    // Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        
        for(int i = 0; i < n; i++){
            reverse(mat[i].begin(), mat[i].end());
        }
        
        // transpose of the matrix
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(i < j){
                    swap(mat[i][j], mat[j][i]);
                }
            }
        }
    }
};