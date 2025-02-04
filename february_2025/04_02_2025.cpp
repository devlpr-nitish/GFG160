
class Solution {
  public:
    int diameter(Node* root) {
        // Your code here
        int dia = 0;
        solve(root, dia);
        return dia;
    }
    
    int solve(Node* root, int &dia){
        if(!root){
            return 0;
        }
        
        int lheight = solve(root->left, dia);
        int rheight = solve(root->right, dia);
        
        dia = max(dia, lheight +  rheight);
        
        return 1 + max(lheight, rheight);
    }
};