
class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        // code here
        
        vector<int> res;
        int n = mat.size();
        int m = mat[0].size();
        
        int left = 0, right = m - 1;
        int top  = 0, bottom = n - 1;
        
        
        int move = 0;
        // 0 for left to right
        // 1 for top to bottom
        // 2 for right to left
        // 3 for bottom to top
        
        while(top <= bottom && left <= right){
            
            // left to right
            if(move == 0){
                for(int i = left; i <= right; i++){
                    res.push_back(mat[top][i]);
                }
                top++;
                move++;
            }
            
            // top to bottom
            if(move == 1){
                for(int i = top; i <= bottom; i++){
                    res.push_back(mat[i][right]);
                }
                right--;
                move++;
            }
            
            // right to left
            if(move == 2 && top <= bottom){
                for(int i = right; i >= left; i--){
                    res.push_back(mat[bottom][i]);
                }
                bottom--;
                move++;
            }
            
            // bottom to top
            if(move == 3 && left <= right){
                for(int i = bottom; i >= top; i--){
                    res.push_back(mat[i][left]);
                }
                left++;
                move++;
            }
            
            move = move % 4;
        }
        
        return res;
    }
};