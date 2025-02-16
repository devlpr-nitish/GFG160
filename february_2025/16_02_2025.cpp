
class Solution {
  public:
    // Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root) {
        // Your code here
        vector<int> res;
        
        inorder(root, res) ;
        return res;
    }
    
    void inorder(Node* root, vector<int> &res){
        if(!root){
            res.push_back(-1);
            return;
        }
        
        res.push_back(root->data);
        inorder(root->left, res);
        inorder(root->right, res);
    }
    

    // Function to deserialize a list and construct the tree.
    int i = 0;
    Node *deSerialize(vector<int> &arr) {
        // Your code here
        int val = arr[i++];
        if(val == -1){
            return NULL;
        }
        
        
        Node* node = new Node(val);
        node->left = deSerialize(arr);
        node->right = deSerialize(arr);
        
        return node;
    }
};

