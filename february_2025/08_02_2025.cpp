
class Solution {
  public:
    vector<int> boundaryTraversal(Node *root) {
        // code here
        if(!root){
            return {};
        }
        
        vector<int> res;
        
        if(!isLeaf(root)){
            res.push_back(root->data);
        }
        
        // add left
        addLeft(root, res);
        // add leaves
        addLeaves(root, res);
        // add right
        addRight(root, res);
        
        
        return res;
        
    }
    
    bool isLeaf(Node* root){
        return !root->left && !root->right;
    }
    
    void addLeft(Node* root, vector<int> &res){
        
        Node* curr = root->left;
        
        while(curr){
            
            if(!isLeaf(curr)){
                res.push_back(curr->data);
            }
            
            if(curr->left){
                curr = curr->left;
            }else{
                curr = curr->right;
            }
        }
    }
    
    void addRight(Node* root, vector<int> &res){
        Node* curr = root->right;
        vector<int> temp;
        while(curr){
            
            if(!isLeaf(curr)){
                temp.push_back(curr->data);
            }
            
            if(curr->right){
                curr = curr->right;
            }else{
                curr = curr->left;
            }
        }
        
        for(int i = temp.size() - 1; i >= 0; i--){
            res.push_back(temp[i]);
        }
    }
    
    void addLeaves(Node* root, vector<int> &res){
        
        if(isLeaf(root)){
            res.push_back(root->data);
            return;
        }
        
        if(root->left){
            addLeaves(root->left, res);
        }
        
        if(root->right){
            addLeaves(root->right, res);
        }
    }
    
    
};

