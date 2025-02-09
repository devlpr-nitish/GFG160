
class Solution {
  public:
    // Function to return maximum path sum from any node in a tree.
    int maxSum;
    int findMaxSum(Node *root) {
        // code here
        maxSum = INT_MIN;
        solve(root);
        return maxSum;
    }
    
    int solve(Node* root){
        if(!root){
            return 0;
        }
        
        int l = solve(root->left);
        int r = solve(root->right);
        
        int niche_mil_gaya_ans = l + r + root->data;
        int koi_ek_achha = max(l, r) + root->data;
        int sirf_root    = root->data;
        
        maxSum  = max({maxSum, niche_mil_gaya_ans, koi_ek_achha, sirf_root});
        
        return max(koi_ek_achha, sirf_root);
    }
    
};


