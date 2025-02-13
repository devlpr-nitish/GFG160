
class Solution {
    private:
        Node* first;
        Node* second;
        Node* third;
        Node* prev;
    
  public:
    void correctBST(Node* root) {
        // add code here.
        if(!root)return;
        first = second = third = NULL;
        prev = new Node(INT_MIN);
        
        inorder(root);
        
        if(first && third){
            int temp = first->data;
            first->data = third->data;
            third->data = temp;
        }else if(first && second){
            int temp = first->data;
            first->data = second->data;
            second->data = temp;
        }
    }
    
    void inorder(Node* root){
        if(!root){
            return;
        }
        
        inorder(root->left);
        
        if(prev && root->data < prev->data){
            if(!first){
                first = prev;
                second = root;
            }else{
                third = root;
            }
        }
        prev = root;
        
        inorder(root->right);
    }
};
