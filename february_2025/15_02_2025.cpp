
class Solution {
  public:
    Node* LCA(Node* root, Node* n1, Node* n2) {
        // code here
        
        if(!root)
            return NULL;
        
        if(root == n1 || root == n2){
            return root;
        }
        
        Node* left  = LCA(root->left, n1,n2);
        Node* right = LCA(root->right, n1,n2);
        
        if(left && right){
            return root;
        }
        
        if(left){
            return left;
        }
        
        return right;
    }
};
