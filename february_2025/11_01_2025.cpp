class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) {
        // Your code here
        
        return solve(root, INT_MIN, INT_MAX);
    }
    
    bool solve(Node* root, int min, int max){
        if(!root)return true;
        
        if(root->data <= min || root->data >= max)return false;
        
        return solve(root->left, min, root->data) && solve(root->right, root->data, max);
    }
};
