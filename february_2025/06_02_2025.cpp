
class Solution {
  public:
    // Function to build the tree from given inorder and preorder traversals
    Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
        // code here
        
        int n = inorder.size();
        int idx = 0;
        
        return solve(inorder, preorder, 0, n-1, idx);
    }
    
    Node* solve(vector<int> &inorder, vector<int> &preorder, int start, int end, int &idx){
        if(start > end){
            return NULL;
        }
        
        int rootVal = preorder[idx];
        
        Node* root = new Node(rootVal);
        
        int i = start;
        // finding root in inorder array
        for(; i <= end; i++){
            if(rootVal == inorder[i]){
                break;
            }
        }
        idx++;
        
        root->left  = solve(inorder,preorder, start, i - 1, idx);
        root->right = solve(inorder,preorder, i + 1, end, idx);
        
        return root;
    }
};

