
class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        // code here
        if(!node)
            return;
        
        Node* l = node->left;
        Node* r = node->right;
        
        node->left = r;
        node->right = l;
        
        mirror(node->left);
        mirror(node->right);
    }
};
