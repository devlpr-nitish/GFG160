
class Solution {
  public:
    Node* reverseList(struct Node* head) {
        // code here
        
        if(head->next == NULL){
            return head;
        }
        
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
};

