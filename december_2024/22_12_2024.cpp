
class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        // your code here
        
        int n = mat.size();
        int m = mat[0].size();
        
        int r = 0;
        int c = m - 1;
        
        while(r < n && c >= 0){
            
            if(mat[r][c] == x){
                return true;
            }else if(mat[r][c] < x){
                r++;
            }else{
                c--;
            }
        }
        
        return false;
        
    }
};
