
class Solution {
  public:
    // Function to find the height of a binary tree.
    int height(Node* node) {
        // code here
        
        queue<Node*> q;
        int h = 0;
        q.push(node);
        
        while(!q.empty()){
            int n = q.size();
            while(n--){
                Node* root = q.front();
                q.pop();
                
                if(root->left){
                    q.push(root->left);
                }
                
                if(root->right){
                    q.push(root->right);
                }
            }
            
            if(!q.empty()){
                h++;
            }
        }
        
        return h;
    }
};

