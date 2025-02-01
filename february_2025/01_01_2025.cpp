
class Solution {
  public:
    int n;
    bool isWordExist(vector<vector<char>>& mat, string& word) {
        // Code here
        n = word.length();
        
        for(int i = 0; i < mat.size(); i++){
            for(int j =0; j < mat[0].size(); j++){
                if(mat[i][j] == word[0]){
                    if(solve(mat, word, i,j, 0)){
                        return true;
                    }
                }
            }
        }
        
        return false;
    }
    
    bool solve(vector<vector<char>>& mat, string& word, int row, int col, int k){
        
        if(k == n){
            return true;
        }
        
        if(row < 0 || row >= mat.size() || col < 0 || col >= mat[0].size() || mat[row][col] == '$'){
            return false;
        }
        
        if(mat[row][col] != word[k]){
            return false;
        }
        
        char temp = mat[row][col];
        mat[row][col] = '$';
            
        // up
        bool up = solve(mat, word, row - 1, col, k + 1);
            
        // down
        bool down = solve(mat, word, row + 1, col, k + 1);
            
        // left
        bool left = solve(mat, word, row, col - 1, k + 1);
            
        // right
        bool right = solve(mat, word, row, col + 1, k + 1);
        
        
            
        mat[row][col] = temp;
        
        
        return up || down || left || right;
       
    }
};
