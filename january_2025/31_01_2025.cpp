
class Solution {
  public:
    // Function to find a solved Sudoku.
    void solveSudoku(vector<vector<int>> &mat) {
        // code here
        solve(mat);
    }
    
    bool solve(vector<vector<int>> &mat){
        int m = mat.size();
        int n = mat[0].size();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                
                // if mat[i][j] is empty
                if(mat[i][j] == 0){
                    
                    // try all possible number from 1 to 9
                    for(int num = 1; num <= 9; num++){
                        
                        // if that num is valid on that place on mat
                        if(isValid(mat, i,j,num)){
                            mat[i][j] = num;
                        
                            if(solve(mat) == true){
                                return true;
                            }else{
                                // undo
                                mat[i][j] = 0;
                            }
                        }
                    }
                    
                    return false;
                }
            }
        }
        
        return true;
    }
    
    bool isValid(vector<vector<int>> &mat, int row, int col, int num){
        
        for(int i = 0; i < 9; i++){
            
            if(mat[row][i] == num){
                return false;
            }
            
            if(mat[i][col] == num){
                return false;
            }
            
            // check for 3x3 box
            if(mat[(3*(row/3)) + i/3][(3*(col/3))+i%3] == num){
                return false;
            }
        }
        
        return true;
    }
};
