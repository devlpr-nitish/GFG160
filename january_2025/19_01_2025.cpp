
class Solution {
  public:
    Node* rotate(Node* head, int k) {
        // Your code here
        if(!head || k == 0)
            return head;
        
        int len = 1;
        Node* curr = head;
        while(curr->next){
            curr = curr->next;
            len++;
        }
        
        k = k % len;
        if(k == 0)
            return head;
        
        //make it circular
        curr->next = head;
        
        curr = head;
        int count = 1;
        while(count < k && curr->next){
            curr = curr->next;
            count++;
        }
        
        Node *res = curr->next;
        curr->next = NULL;
        
        return res;
        
    }
};