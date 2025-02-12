
class Solution {
  public:
    bool findTarget(Node *root, int target) {
        // your code here.
        
        unordered_set<int> st;
        
        return solve(root, target, st);
    }
    
    bool solve(Node* root, int target, unordered_set<int> &st){
        
        if(!root){
            return false;
        }
        
        if(st.find(target - root->data) != st.end()){
            return true;
        }else{
            st.insert(root->data);
        }
        
        return solve(root->left, target, st) || solve(root->right, target, st);
    }
};