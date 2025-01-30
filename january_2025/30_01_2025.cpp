
class Solution {
  public:
    vector<vector<int>> result;
    int N;
    vector<vector<int>> nQueen(int n) {
        // code here
        N = n;
        
        vector<int> board;
        vector<bool> visCol(n, false);
        vector<bool> vislDia(2*n-1, false);
        vector<bool> visrDia(2*n-1, false);
        
        solve(board, 0, visCol, vislDia, visrDia);
        return result;
    }
    
    void solve(vector<int> &board,int row, vector<bool> &visCol, vector<bool> &vislDia, vector<bool> &visrDia){
        if(row >= N){
            result.push_back(board);
            return;
        }
        
        for(int i = 0; i < N; i++){
            
            if(!visCol[i] && !vislDia[row + i] && !visrDia[row - i + N - 1]){
                board.push_back(i+1);
                visCol[i] = true;
                vislDia[row + i] = true;
                visrDia[row-i+N-1] = true;
                
                solve(board,row+1,visCol,vislDia,visrDia);
                board.pop_back();
                visCol[i] = false;
                vislDia[row + i] = false;
                visrDia[row-i+N-1] = false;
            }
        }
    }
    
    
};
