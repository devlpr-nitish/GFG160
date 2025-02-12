
class Solution {
  public:
    // Return the Kth smallest element in the given BST
    int ans = -1;
    int kthSmallest(Node *root, int k) {
        // add code here.
        int count = 0;
        solve(root, k, count);
        return ans;
    }
    
    void solve(Node* root, int k, int &count){
        if(!root){
            return;
        }
        
        
        solve(root->left, k, count);
        count++;
        if(k == count){
            ans = root->data;
            return;
        }
        solve(root->right,k,count);
        
    }
};